#include<iostream>
#include<vector>
// Use c++11 to compile 'g++ name.cpp -std=c++11'
using namespace std;

int main()
{
    vector<int>items = {1,2,3}; //Declaration and initialization
    items.push_back(12); // Adding elements 
    cout<<items.size()<<endl;// Printing size
    cout<<items[3]<<endl;//Accessing elements based on position
    items.pop_back();//Deleting items from rear
    cout<<items.size()<<endl;//Printing modified size
}