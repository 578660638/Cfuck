//
// Created by Administrator on 2021-10-04.
//

#ifndef INLINETEST_PERSON_H
#define INLINETEST_PERSON_H


#include "android/log.h"

class person {
private:
    int sex;
    int age;
public:
    person(int sex,int age):sex(sex),age(age){
        __android_log_print(4,"cpp11","%s","person(int sex,int age):sex(sex),age(age) init is call");
    }
    int getsex();
    inline void setsex(int sex);
   __attribute__((always_inline)) void setage(int age){
       this->sex=sex;
   };
    int getage();


};
inline void person::setsex(int sex){
    this->sex=sex;
    __android_log_print(4,"cpp11","%s","inline void setsex(int sex) is call");
}



#endif //INLINETEST_PERSON_H
