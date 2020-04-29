#include<iostream>
using namespace std;

class User
{
    //Simple class
    //By default private access
    // Use this access modifier when you want members to be accessible in base class, friend funcs
    string status = "GOLD"; //non-static data member initializers available with c++11
    public://Public access granted explicitly
        // Use this access modifier when you want members to be accessible everywhere
        string first_name, last_name;
        string get_status()
        {
            return status;
        }
    protected:
        // Use this access modifier when you want members to be accessible in base class, friend funcs, derived classes
};

int main()
{
    User user;//Instantiation
    user.first_name = "Rudy";
    cout<<user.first_name<<endl;
    cout<<user.get_status()<<endl;
}