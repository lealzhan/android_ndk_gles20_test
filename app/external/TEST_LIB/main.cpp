#include "test.h"

#include <jni.h>

std::string get()
{
	test temp;
	return temp.get0();
}

extern "C"
jstring
Java_com_example_ling_1pc_lession_10_1mine_MainActivity_testlibGet(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello =  get() ;
    return env->NewStringUTF(hello.c_str());
}