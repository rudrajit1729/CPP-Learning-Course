#include<iostream>
using namespace std;

class User
{
    string status = "GOLD"; //non-static data member initializers available with c++11
    public://Public access granted explicitly
        string first_name, last_name;
        string get_status() // Getters - Get access to abstracted data in proper way
        {
            return status;
        }
        void set_status(string status) // Setters - Control access - Programmer has to follow some rules while assigning value to members
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
                this->status = status;
            else
                this->status = "NO STATUS";
            
        }
};

int main()
{
    User user;//Instantiation
    user.first_name = "Rudy";
    cout<<user.first_name<<endl;
    user.set_status("Tacos");
    cout<<user.get_status()<<endl;
    user.set_status("Gold");
    cout<<user.get_status()<<endl;
}