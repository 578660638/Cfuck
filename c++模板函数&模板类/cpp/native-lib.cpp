#include <jni.h>
#include <string>
#include "android/log.h"
#include "comptate.h"

//模板函数创建方式1
template<class T>
T add(T a,T b){
    return a+b;
}
//模板函数创建方式2
template<typename T>
T add2(T a,T b){
    return a+b;
}
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_somoban_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    int result_int = add(5,6);
    __android_log_print(4,"cpp11","add-->%d",result_int);
//    int result_int2 = add2(5,6);
//    __android_log_print(4,"cpp11","add2-->%d",result_int2);
//    auto fla = add(5.1f,5.9f);
//    __android_log_print(4,"cpp11","fla-->%f",fla);
    comptate<int> com1(10,2);

    auto result = com1.add();
    __android_log_print(4,"cpp11","result-->%d",result);
    comptate<float> com2(10.2f,2.8f);
    auto result1 = com2.sub();
    __android_log_print(4,"cpp11","result1-->%f",result1);
    std::string hello = "Hello from C++";
    //模板的实例化过程发生在编译器编译阶段
    return env->NewStringUTF(hello.c_str());
}