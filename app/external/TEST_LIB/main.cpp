#include "test.h"

#include <jni.h>

std::string get()
{
	test temp;
	return temp.get0();
}
std::string eigen()
{
    char c_20[20];     //char *c;
    test temp;
    float f = temp.eigen_test();
    sprintf(c_20, "%f", f);
    return c_20;
}


extern "C"
jstring
Java_com_example_ling_1pc_lession_10_1mine_MainActivity_testlibGet(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello =  eigen();//get() ;
    return env->NewStringUTF(hello.c_str());
}