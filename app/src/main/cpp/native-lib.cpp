#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_omniwyse_cppapp_MainActivity_stringFromJNI2(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}


extern "C"
JNIEXPORT jstring JNICALL
Java_com_omniwyse_cppapp_MainActivity_stringFromJNI(JNIEnv *env, jobject instance, jint i,
                                                    jint i1) {

    std:: string returnVlue = "200";


    return env->NewStringUTF(returnVlue.c_str());
}



extern "C"
JNIEXPORT jint JNICALL
Java_com_omniwyse_cppapp_MainActivity_stringFromJNI1(JNIEnv *env, jobject instance, jint i,
                                                     jint i1) {
    return  i+i1;

}