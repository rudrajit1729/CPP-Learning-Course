#include<iostream>

using namespace std;

void do_stuff(int x) // Pass by value
{
    x=13; // Value changed here won't be reflected on actual value
}

void do_something(int &x) // Pass by Reference
{
    x = 13; // Value changed here will be reflected on actual value
}
int main()
{
    int x = 5;
    do_stuff(x);
    cout<<x<<endl;
    do_something(x);
    cout<<x<<endl;
}