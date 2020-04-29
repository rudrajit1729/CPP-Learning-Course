#include<iostream>
#include<bits/stdc++.h>
//#include<vector>

// COmpile using g++ Class_basics.cpp -std=c++11

using namespace std;

class User
{
    string status = "GOLD";
    public:
        string first_name, last_name;
        string get_status()
        {
            return status;
        }
};

int add_if_not_already_exists(vector<User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].first_name == user.first_name &&
            users[i].last_name == user.last_name) // match
            {
                return i;//Index of that person
            }
    }
    // No match found
    users.push_back(user);
    return users.size() - 1;
}


int main()
{
    User user1, user2, user3;
    user1.first_name = "Amitabh";user1.last_name = "Bacchan";
    user2.first_name = "Shah Rukh";user2.last_name = "Khan";
    user3.first_name = "Akshay";user3.last_name = "Kumar";

    vector<User>users;//Vector of User(class) type
    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.first_name = "Shah Rukh";user.last_name = "Khan";
    cout<<"Index : "<<add_if_not_already_exists(users, user)<<endl;
    cout<<"Number of users : "<<users.size()<<endl;

}