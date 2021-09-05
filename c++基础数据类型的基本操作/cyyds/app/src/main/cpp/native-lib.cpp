#include <jni.h>
#include <string>
#include "android/log.h"

void func1(int){
    __android_log_print(4,"cpp11","c:%s","void func(int)");
}

void func1(int *){
    __android_log_print(4,"cpp11","c:%s","void func(int *)" );
}
void swap(int &a,int&b){
    int c = a;
    a=b;
    b=c;
}
void swap(int* a,int* b){
    int c = *a;
    *a=*b;
    *b=c;
}


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_cyyds_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
      func1(nullptr);//nullptr代表一个空指针，记住NULL的二义性最终被替换成了0
      int a =10;
      int b =20;
      int &c =a;
      int &d =b;//引用  其实就一个变量的别名只能左值
      swap(&a,&b);//通过指针进行转换
    __android_log_print(4,"cpp11","c:%d,d:%d", a,b);
      swap(c,d);
    __android_log_print(4,"cpp11","c:%d,d:%d",a, b);
        char chat_a = 'a'; //一个字节  64位
        int int_b= 124;//4个字节
        unsigned int int_c =125;
        int &int_d = int_b;
        int *int_e = &int_b;
        __android_log_print(4,"cpp11","char:%d,int:%d,unsigned %d", sizeof(chat_a), sizeof(int_b),
                            sizeof(int_c));
         __android_log_print(4,"cpp11","&int_d:%d,int_e:%d,*int_e:%d", int_d, int_e,*int_e);

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
