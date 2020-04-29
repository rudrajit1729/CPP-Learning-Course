#include<iostream>
#include<string>

using namespace std;

struct User
{
    // Default access modifier = public i.e. members can be accessed from outside
   string first_name;
   string last_name;
   string get_status()
   {
       return status;
   }
   //string status = "GOLD";
   //making status private
   private:
        string status = "GOLD";//Set to default value - Works with c++11
};

int main()
{
    User me;
    me.first_name = "Rudrajit";
    me.last_name = "Choudhuri";
    cout<<me.first_name<<" "<<me.last_name<<" "<<me.get_status()<<endl;
}