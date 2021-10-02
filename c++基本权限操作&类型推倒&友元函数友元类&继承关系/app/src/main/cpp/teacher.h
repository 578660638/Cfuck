//
// Created by Administrator on 2021-09-05.
//

#ifndef MY_APPLICATION_TEACHER_H
#define MY_APPLICATION_TEACHER_H


#include "Person.h"

#include "android/log.h"
#include "student.h"

class teacher: public Person {

public:teacher(int sex ,int age,int id):Person(sex,age){
    this->teacherid=id;
      __android_log_print(4,"cpp11","%S","teacher(int sex ,int age,int id) is called");

    }
    int teacher_get_studentid(student *stu){
        __android_log_print(4,"cpp11","%S","teacher(teacher_get_studentid) is called");
        return stu->id;
    }

private:
    int teacherid ;
};


#endif //MY_APPLICATION_TEACHER_H
