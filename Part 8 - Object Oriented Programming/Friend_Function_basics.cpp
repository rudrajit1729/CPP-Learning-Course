#include<iostream>

using namespace std;

class User
{
    string status;
    public:
        string first_name, last_name;
        friend ostream & operator << (ostream & output, User user);
        friend istream & operator >> (istream & input, User & user);
};

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

int main()
{
    User user;
    cout<<"Enter details : ";
    cin>>user;
    cout<<"User Details :\n"<<user<<endl;
}
