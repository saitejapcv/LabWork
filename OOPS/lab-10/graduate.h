#ifndef GRADUATE_H
#define GRADUATE_H
#include <iostream>
#include "student.h"

class Graduate : public Student {
    friend ostream &operator <<(ostream &, const Graduate &);
    public:
    Graduate(char* = "", char* = "", char* = "");
    protected:
    char* degree;
}


#endif GRADUATE_H