//
// Created by Administrator on 2021-09-05.
//
#include "android/log.h"
#ifndef MY_APPLICATION_PERSON_H
#define MY_APPLICATION_PERSON_H

class Person {
private:
    int sex;
    int age;
public:
    Person(int sex ,int age):sex(sex),age(age){
      __android_log_print(4,"cpp11","%S","Person(int sex ,int age) is called");
    }
    int getsex();

    int getage();

    void setSex(int sex);

    void setAge(int age);
};


#endif //MY_APPLICATION_PERSON_H
