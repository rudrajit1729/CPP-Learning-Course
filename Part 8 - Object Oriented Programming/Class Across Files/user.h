#ifndef USER_H
#define USER_H
#include<iostream>
using namespace std;
class User
{
    string status;
    public:
        string first_name, last_name;
        friend ostream & operator << (ostream & output, User user);
        friend istream & operator >> (istream & input, User & user);
        User();
        virtual void output(); // Polymorphism - Function to be overwrritten in sub classes
};
#endif