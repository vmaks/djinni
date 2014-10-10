// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum.djinni

#pragma once

#include "color.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeColor final : djinni::JniEnum {
public:
    using CppType = color;
    using JniType = jobject;

    static jobject toJava(JNIEnv* jniEnv, color c) { return djinni::JniClass<NativeColor>::get().create(jniEnv, static_cast<int>(c)).release(); }
    static color fromJava(JNIEnv* jniEnv, jobject j) { return static_cast<color>(djinni::JniClass<NativeColor>::get().ordinal(jniEnv, j)); }

private:
    NativeColor() : JniEnum("com/dropbox/djinni/test/Color") {}
    friend class djinni::JniClass<NativeColor>;
};

}  // namespace djinni_generated