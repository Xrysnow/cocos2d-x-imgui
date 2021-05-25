#pragma once
#include "cocos2d.h"
#include "scripting/lua-bindings/manual/LuaBasicConversions.h"
#include <cstdint>
#include <type_traits>
#include <array>
#include <vector>
#include <unordered_set>
#include <unordered_map>

namespace lua
{
    constexpr int LUA_TPROTO = LUA_TTHREAD + 1;
    constexpr int LUA_TCDATA = LUA_TTHREAD + 2;

    inline std::string getClassNameByTypeID(const std::string& typeID)
    {
        const auto it = g_luaType.find(typeID);
        if (it != g_luaType.end())
            return it->second;
        return "";
    }

    inline int push_table_instance(lua_State* L, int lo)
    {
        if (lua_istable(L, lo)) {
            lua_pushstring(L, ".c_instance");
            lua_gettable(L, lo);
            if (lua_isuserdata(L, -1)) {
                lua_replace(L, lo);
                return 1;
            }
            lua_pop(L, 1);
            return 0;
        }
        return 0;
    }

    inline int isusertype(lua_State* L, int lo, const char* type)
    {
        if (lo < 0)
            lo = lua_gettop(L) + lo + 1;
        if (lo <= 0)
            return 0;
        if (!lua_isuserdata(L, lo)) {
            if (!push_table_instance(L, lo)) {
                return 0;
            }
        }
        if (lua_getmetatable(L, lo))        /* if metatable? */
        {
            lua_rawget(L, LUA_REGISTRYINDEX);  /* get registry[mt] */
            const char *tn = lua_tostring(L, -1);
            const int r = tn && (strcmp(tn, type) == 0);
            lua_pop(L, 1);
            if (r)
                return 1;
            else
            {
                /* check if it is a specialized class */
                lua_pushstring(L, "tolua_super");
                lua_rawget(L, LUA_REGISTRYINDEX); /* get super */
                lua_getmetatable(L, lo);
                lua_rawget(L, -2);                /* get super[mt] */
                if (lua_istable(L, -1))
                {
                    lua_pushstring(L, type);
                    lua_rawget(L, -2);                /* get super[mt][type] */
                    const int b = lua_toboolean(L, -1);
                    lua_pop(L, 3);
                    if (b)
                        return 1;
                }
            }
        }
        return 0;
    }

    inline void* _tousertype(lua_State* L, int lo)
    {
        if (!lua_isuserdata(L, lo)) {
            if (!push_table_instance(L, lo))
                return nullptr;
        }
        const auto u = lua_touserdata(L, lo);
        return u ? *(void**)u : nullptr;
    }

    inline void ref_type_to_luaval(lua_State* L, Ref* ref, const char* typeID)
    {
        if (ref)
        {
            std::string typeName;
            if (typeID)
                typeName = typeID;
            else
                typeName = typeid(*ref).name();
            const auto iter = g_luaType.find(typeName);
            auto type = "cc.Ref";
            if (g_luaType.end() != iter)
                type = iter->second.c_str();
            toluafix_pushusertype_ccobject(
                L, (int)ref->_ID, &ref->_luaID, (void*)ref, type);
        }
        else
        {
            lua_pushnil(L);
        }
    }

    ////////////////////////////////////////////////////////////////////////////////

    template<typename T, class Enable = void> struct to_native {};

#define CHECK_TO_NATIVE const auto top = lua_gettop(L); if (nullptr == L || nullptr == outValue || top < lo) return false;

#define TO_NATIVE_BASIC(_F, _T) template<>\
    struct to_native<_T> {\
        static bool F(lua_State* L, int lo, _T* outValue, const char* fName = "") {\
            return _F(L, lo, outValue, fName); } };

#define TO_NATIVE_VECTOR(_Ty, _Setter) template<typename T>\
    struct to_native<_Ty<T>> {\
        static bool F(lua_State* L, int lo, _Ty<T>* outValue, const char* fName = "") {\
            CHECK_TO_NATIVE;\
            const auto type = lua_type(L, lo);\
            if (!(type == LUA_TTABLE || type == LUA_TUSERDATA || type == LUA_TCDATA))\
                return false;\
            const size_t len = lua_objlen(L, lo);\
            T value;\
            bool ok = true;\
            for (size_t i = 0; i < len; i++) {\
                lua_pushnumber(L, i + 1);\
                lua_gettable(L, lo);\
                ok &= to_native<T>::F(L, top + 1, &value, fName);\
                lua_pop(L, 1);\
                if (ok)\
                    outValue->_Setter(value);\
                else\
                    break;\
            }\
            return true; } };

#define TO_NATIVE_MAP(_Ty, _Setter) template<typename K, typename V>\
    struct to_native<_Ty<K, V>> {\
        static bool F(lua_State* L, int lo, _Ty<K, V>* outValue, const char* fName = "") {\
            CHECK_TO_NATIVE;\
            const auto type = lua_type(L, lo);\
            if (!(type == LUA_TTABLE || type == LUA_TUSERDATA || type == LUA_TCDATA))\
                return false;\
            K key; V value;\
            lua_pushnil(L);\
            while (lua_next(L, lo) != 0) {\
                if(!to_native<K>::F(L, top + 1, &key, fName)) {\
                    lua_pop(L, 1); /* removes 'value'; keep 'key' for next iteration*/\
                    continue;\
                }\
                if (to_native<V>::F(L, top + 2, &value, fName))\
                    (*outValue)_Setter;\
                lua_pop(L, 1);\
            }\
            return true; } };\

#define TO_NATIVE_SIGNED(_T) template<>\
    struct to_native<_T> {\
        static bool F(lua_State* L, int lo, _T* outValue, const char* funcName = ""){\
            bool ret = lua_type(L, lo) == LUA_TNUMBER;\
            if (ret) *outValue = (_T)(tolua_tonumber(L, lo, 0)); return ret; } }
#define TO_NATIVE_UNSIGNED(_T) template<>\
    struct to_native<_T> {\
        static bool F(lua_State* L, int lo, _T* outValue, const char* funcName = ""){\
            bool ret = lua_type(L, lo) == LUA_TNUMBER;\
            if (ret) *outValue = (_T)(tolua_tonumber(L, lo, 0)); return ret; } }

    template<typename T>
    struct to_native<T, typename std::enable_if<std::is_enum<T>::value>::type> {
        static bool F(lua_State* L, int lo, T* outValue, const char* fName = "") {
            CHECK_TO_NATIVE;
            using type = typename std::underlying_type<T>::type;
            type value;
            auto ok = to_native<type>::F(L, lo, &value, fName);
            if (ok) *outValue = (T)value;
            return ok;
        }
    };

    TO_NATIVE_SIGNED(int8_t);
    TO_NATIVE_SIGNED(int16_t);
    TO_NATIVE_SIGNED(int32_t);
    TO_NATIVE_SIGNED(int64_t);
    TO_NATIVE_UNSIGNED(uint8_t);
    TO_NATIVE_UNSIGNED(uint16_t);
    TO_NATIVE_UNSIGNED(uint32_t);
    TO_NATIVE_UNSIGNED(uint64_t);

    TO_NATIVE_BASIC(luaval_to_boolean, bool);
    TO_NATIVE_BASIC(luaval_to_number, double);

    //
    TO_NATIVE_BASIC(luaval_to_vec2, cocos2d::Vec2);
    TO_NATIVE_BASIC(luaval_to_vec3, cocos2d::Vec3);
    TO_NATIVE_BASIC(luaval_to_vec4, cocos2d::Vec4);
    TO_NATIVE_BASIC(luaval_to_mat4, cocos2d::Mat4);

    template<>
    struct to_native<float> {
        static bool F(lua_State* L, int lo, float* outValue, const char* fName = "") {
            CHECK_TO_NATIVE;
            double v;
            const auto ok = to_native<double>::F(L, lo, &v, fName);
            if (ok) *outValue = (float)v;
            return ok;
        }
    };

    template<>
    struct to_native<const char*> {
        static bool F(lua_State* L, int lo, const char** outValue, const char* fName = "") {
            CHECK_TO_NATIVE;
            if (!lua_isstring(L, lo))
                return false;
            *outValue = lua_tolstring(L, lo, nullptr);
            return true;
        }
    };

    template<>
    struct to_native<std::string> {
        static bool F(lua_State* L, int lo, std::string* outValue, const char* fName = "") {
            CHECK_TO_NATIVE;
            if (!lua_isstring(L, lo))
                return false;
            size_t size;
            const auto str = lua_tolstring(L, lo, &size);
            outValue->assign(str, size);
            return true;
        }
    };

    template<typename T>
    struct to_native<T*, typename std::enable_if<std::is_base_of<cocos2d::Ref, T>::value>::type> {
        static bool F(lua_State* L, int lo, T** outValue, const char* fName = "") {
            CHECK_TO_NATIVE;
            if (lua_isnil(L, lo)) {
                *outValue = nullptr;
                return true;
            }
            auto className = getClassNameByTypeID(typeid(T).name());
            if (className.empty()) className = "cc.Ref";
            if (!isusertype(L, lo, className.c_str()))
                return false;
            const auto u = lua_touserdata(L, lo);
            if (!u)
                return false; //note: return false when userdata is null
            *outValue = static_cast<T*>(*(void**)u);
            return true;
        }
    };

    template<typename T>
    struct to_native<T*, typename std::enable_if<!std::is_base_of<cocos2d::Ref, T>::value>::type> {
        static bool F(lua_State* L, int lo, T** outValue, const char* fName = "") {
            CHECK_TO_NATIVE;
            if (lua_isnil(L, lo)) {
                *outValue = nullptr;
                return true;
            }
            auto p = (T*)_tousertype(L, lo); //note: return false when userdata is null
            if (!p)
                return false;
            *outValue = p;
            return true;
        }
    };

    template<typename T, size_t Size>
    struct to_native<std::array<T, Size>> {
        static bool F(lua_State* L, int lo, std::array<T, Size>* outValue, const char* fName = "") {
            CHECK_TO_NATIVE;
            const auto type = lua_type(L, lo);
            if (!(type == LUA_TTABLE || type == LUA_TUSERDATA || type == LUA_TCDATA))
                return false;
            const size_t len = std::min(lua_objlen(L, lo), Size);
            T value;
            bool ok = true;
            for (size_t i = 0; i < len; i++) {
                lua_pushnumber(L, i + 1);
                lua_gettable(L, lo);
                ok &= to_native<T>::F(L, top + 1, &value, fName);
                lua_pop(L, 1);
                if (ok)
                    outValue->operator[](i) = value;
                else
                    break;
            }
            return true;
        }
    };

    template<typename T1, typename T2>
    struct to_native<std::pair<T1, T2>> {
        static bool F(lua_State* L, int lo, std::pair<T1, T2>* outValue, const char* fName = "") {
            CHECK_TO_NATIVE;
            const auto type = lua_type(L, lo);
            if (!(type == LUA_TTABLE || type == LUA_TUSERDATA || type == LUA_TCDATA))
                return false;
            T1 value1; T2 value2;
            bool ok = true;
            lua_pushnumber(L, 1);
            lua_gettable(L, lo);
            ok &= to_native<T1>::F(L, top + 1, &value1, fName);
            lua_pop(L, 1);
            if (ok)
                outValue->first = value1;
            else
                return false;
            lua_pushnumber(L, 2);
            lua_gettable(L, lo);
            ok &= to_native<T2>::F(L, top + 1, &value2, fName);
            lua_pop(L, 1);
            if (ok)
                outValue->second = value2;
            return ok;
        }
    };

    TO_NATIVE_VECTOR(cocos2d::Vector, pushBack);
    TO_NATIVE_VECTOR(std::vector, push_back);
    TO_NATIVE_VECTOR(std::set, insert);
    TO_NATIVE_VECTOR(std::multiset, insert);
    TO_NATIVE_VECTOR(std::unordered_set, insert);
    TO_NATIVE_VECTOR(std::unordered_multiset, insert);

    TO_NATIVE_MAP(cocos2d::Map, .insert(key, value));
    TO_NATIVE_MAP(std::map, [key] = value);
    TO_NATIVE_MAP(std::unordered_map, [key] = value);
    TO_NATIVE_MAP(std::multimap, .emplace(key, value));
    TO_NATIVE_MAP(std::unordered_multimap, .emplace(key, value));
    
    template<typename T>
    bool luaval_to_native(lua_State* L, int lo, T* outValue, const char* fName = "") {
        return to_native<T>::F(L, lo, outValue, fName);
    }

    ////////////////////////////////////////////////////////////////////////////////

    template<typename T, class Enable = void> struct to_lua {};

#define TO_LUA_BASIC(_F, _T) template<>\
    struct to_lua<_T> {\
        static void F(lua_State* L, const _T& inValue) {\
            _F(L, inValue); } };

#define TO_LUA_VECTOR(_Ty) template<typename T>\
    struct to_lua<_Ty<T>> {\
        static void F(lua_State* L, const _Ty<T>& inValue) {\
            if (!L) return;\
            lua_createtable(L, (int)inValue.size(), 0);\
            int index = 1;\
            for (auto& value : inValue) {\
                lua_pushnumber(L, (lua_Number)index);\
                to_lua<T>::F(L, value);\
                lua_rawset(L, -3);\
                ++index;\
            } } };

#define TO_LUA_MAP(_Ty) template<typename K, typename V>\
    struct to_lua<_Ty<K, V>> {\
        static void F(lua_State* L, const _Ty<K, V>& inValue) {\
            if (!L) return;\
            lua_createtable(L, 0, 0);\
            for (auto& it : inValue) {\
                to_lua<K>::F(L, it.first);\
                to_lua<V>::F(L, it.second);\
                lua_rawset(L, -3);\
            } } };

    TO_LUA_BASIC(vec2_to_luaval, cocos2d::Vec2);
    TO_LUA_BASIC(vec3_to_luaval, cocos2d::Vec3);
    TO_LUA_BASIC(vec4_to_luaval, cocos2d::Vec4);
    TO_LUA_BASIC(mat4_to_luaval, cocos2d::Mat4);

    template<>
    struct to_lua<bool> {
        static void F(lua_State* L, bool inValue) {
            if (!L) return;
            lua_pushboolean(L, inValue);
        }
    };

    template<typename T>
    struct to_lua<T, typename std::enable_if<std::is_arithmetic<T>::value>::type> {
        static void F(lua_State* L, T inValue) {
            if (!L) return;
            lua_pushnumber(L, (lua_Number)inValue);
        }
    };

    template<typename T>
    struct to_lua<T, typename std::enable_if<std::is_enum<T>::value>::type> {
        static void F(lua_State* L, T inValue) {
            if (!L) return;
            using type = typename std::underlying_type<T>::type;
            lua_pushnumber(L, (lua_Number)(type)inValue);
        }
    };

    template<>
    struct to_lua<const char*> {
        static void F(lua_State* L, const char* inValue) {
            if (!L) return;
            lua_pushstring(L, inValue);
        }
    };

    template<>
    struct to_lua<std::string> {
        static void F(lua_State* L, const std::string& inValue) {
            if (!L) return;
            lua_pushlstring(L, inValue.c_str(), inValue.size());
        }
    };

    template<typename T>
    struct to_lua<T*, typename std::enable_if<std::is_base_of<cocos2d::Ref, T>::value>::type> {
        static void F(lua_State* L, T* inValue) {
            if (!L) return;
            ref_type_to_luaval(L, (cocos2d::Ref*)inValue, typeid(T).name());
        }
    };

    template<typename T>
    struct to_lua<T*, typename std::enable_if<!std::is_base_of<cocos2d::Ref, T>::value>::type> {
        static void F(lua_State* L, T* inValue) {
            if (!L) return;
            if (!inValue) { lua_pushnil(L); return; }
            const auto className = getClassNameByTypeID(typeid(T).name());
            if (className.empty()) { lua_pushnil(L); return; }
            lua_getfield(L, LUA_REGISTRYINDEX, className.c_str());
            if (lua_isnil(L, -1)) // leave nil on stack
                return;
            tolua_pushusertype(L, (void*)inValue, className.c_str());
            lua_remove(L, -2);
        }
    };

    template<typename T, size_t Size>
    struct to_lua<std::array<T, Size>> {
        static void F(lua_State* L, const std::array<T, Size>& inValue) {
            if (!L) return;
            lua_createtable(L, (int)inValue.size(), 0);
            int index = 1;
            for (auto& value : inValue) {
                lua_pushnumber(L, (lua_Number)index);
                to_lua<T>::F(L, value);
                lua_rawset(L, -3);
                ++index;
            }
        }
    };

    TO_LUA_VECTOR(cocos2d::Vector);
    TO_LUA_VECTOR(std::vector);
    TO_LUA_VECTOR(std::set);
    TO_LUA_VECTOR(std::multiset);
    TO_LUA_VECTOR(std::unordered_set);
    TO_LUA_VECTOR(std::unordered_multiset);

    TO_LUA_MAP(cocos2d::Map);
    TO_LUA_MAP(std::map);
    TO_LUA_MAP(std::unordered_map);
    TO_LUA_MAP(std::multimap);
    TO_LUA_MAP(std::unordered_multimap);

    template<typename T>
    void native_to_luaval(lua_State* L, T inValue) {
        to_lua<T>::F(L, inValue);
    }
}
