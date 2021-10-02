#include <jni.h>
#include <string>
#include "android/log.h"
#include "Person.h"
#include "student.h"
#include "teacher.h"

struct Mytest{
    static const auto test1 = 2;//在结构体中可以这样使用auto推导关键字
};


//public 可以被任意对象访问
//protected只允许子类以及本类的成员函数访问
//private只允许本类的成员函数访问，子类永远无权访问，可以通过友元类和友元函数进行访问
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    Person man(0,24);//创建person对象执行构造函数
    __android_log_print(4,"cpp11","  man.getage():%d", man.getage());
    student stu(0,24,001);
    teacher *tea1 = new teacher(0,50,020);//另外一种创建对象的方法

    tea1->teacher_get_studentid(&stu);//

    __android_log_print(4,"cpp11","   tea.teacher_get_studentid(&stu):%d", stu.getid());

    auto i =20;//不能用在结构体的非静态数据中，不能在函数中使用auto
    int int_tmp = 110;
    Mytest test1;
    decltype(int_tmp) tmp_b;//智能的堆出tmp_b的类型，这就是decltype

    tmp_b =20;
    __android_log_print(4,"cpp11","tmp_b:%d",tmp_b);
    __android_log_print(4,"cpp11","i:%d",test1.test1);
    __android_log_print(4,"cpp11","i:%d",i);
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
