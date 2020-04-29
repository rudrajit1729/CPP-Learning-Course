#ifndef STUDENT_H
#define STUDENT_H
#include "user.h"
class Student : public User // Inheritance
{
    public:
        void output();
        Student();
};
#endif