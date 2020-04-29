
#include<iostream>
#include "user.h"
#include "teacher.h"
#include "student.h"
using namespace std;

void show_identity(User &user)
{
    user.output();
}

// Run using g++ main.cpp teacher.cpp student.cpp user.cpp -std=c++11 followed by ./a
int main()
{
  User user;
  show_identity(user);

    Teacher teacher;// see the hierarchy of inheritance in output
    // Polymorphism with base
    User &u1 = teacher;
    show_identity(u1);

    Student student;// see the hierarchy of inheritance in output
    User &u2 = student;
    show_identity(u2);

     /*
    Polymorphism -  Function Override in sub class
    teacher.output();
    student.output();
    */
}
