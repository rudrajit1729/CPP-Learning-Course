#include<iostream>
using namespace std;

class User
{
    string status = "GOLD";
    static int user_count; // Static members - associated to class - common to all objects
    public:
        static int get_user_count()
        {
            return user_count;
        }
        string first_name, last_name;
        string get_status()
        {
            return status;
        }
        User() // Default Constructor - no param no return type
        {
            user_count++;
            cout<<"Constructor\n";
        }
        User(string first_name, string last_name, string status)
        {
            user_count++;
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }
        ~User()//Destructor
        {
            user_count--;
            cout<<"Destructor"<<endl;
        }
        
};
int User::user_count = 0; // Static members should be initialised outside the class structure - not in line
int main()
{
    User user("Rudrajit", "Choudhuri", "Silver");
    cout<<user.first_name<<" "<<user.get_status()<<endl;
    cout<<User::get_user_count()<<endl;
    user.~User();
    cout<<User::get_user_count()<<endl;
    /*User user1, user2, user3;
    cout<<User::get_user_count()<<endl;*/

}