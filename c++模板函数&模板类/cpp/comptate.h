//
// Created by 57866 on 2021/9/29.
//

#ifndef SOMOBAN_COMPTATE_H
#define SOMOBAN_COMPTATE_H
#include "android/log.h"
//类模板定义方法
template<class T>
class comptate {
private:
    T a;
    T b;
public:
    comptate(T a,T b):a(a),b(b){
        __android_log_print(4,"cpp11"," comptate(T a,T b):a(a),b(b) is calling-->%f-->%f",a,b);
    }
    T add(){
        return a+b;
    }
    T sub(){
        return a-b;
    }

};


#endif //SOMOBAN_COMPTATE_H
