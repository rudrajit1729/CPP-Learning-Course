#include "user.h"
#include<iostream>
using namespace std;

//If any class member methods needs definition do it here
// int User::func(param)
// {
//    //Body
// }
User::User()
{
    cout<<"User Created\n";
}
void User::output()
{
    cout<<"I am an User\n";
}

// Friend functions can access private members of class outside the class - using friend functions to access private data members here
ostream & operator << (ostream & output, User user)
{
    output <<"First Name : "<<user.first_name<<"\nLast name : "<<user.last_name
            <<"\nStatus : "<<user.status;// Accessing private data members
    return output;
}

istream & operator >> (istream & input, User &user) // Pass by reference else input here will not be effected in function call area
{
    input>>user.first_name>>user.last_name>>
    user.status; // Accessing private data members
    return input;
}
