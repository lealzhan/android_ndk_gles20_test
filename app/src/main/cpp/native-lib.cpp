#include <jni.h>
#include <string>

#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>

extern "C"
jstring
Java_com_example_ling_1pc_lession_10_1mine_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
