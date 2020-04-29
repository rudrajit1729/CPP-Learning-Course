#ifndef TEACHER_H
#define TEACHER_H

#include<iostream>
#include "user.h"
#include <vector>

class Teacher : public User // Inheritance
{
    public:
        vector <string> classes_taking;
        void output();
        Teacher();
};
#endif 