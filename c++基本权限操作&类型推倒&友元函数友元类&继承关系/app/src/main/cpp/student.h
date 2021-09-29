//
// Created by Administrator on 2021-09-05.
//

#ifndef MY_APPLICATION_STUDENT_H
#define MY_APPLICATION_STUDENT_H


#include "Person.h"
#include "android/log.h"

class student : Person{
public:student(int sex,int age,int id ):Person(sex,age){
    __android_log_print(4,"cpp11","%S","student(int sex ,int age,int id) is called");
    this->id=id;

}

    int getid();
    void setid(int id);
    friend class teacher;//友元类添加  要在被调用打函数的public中添加

private:
    int id;
};


#endif //MY_APPLICATION_STUDENT_H
