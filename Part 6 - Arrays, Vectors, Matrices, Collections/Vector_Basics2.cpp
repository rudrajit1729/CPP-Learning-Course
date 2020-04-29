#include<iostream>
#include<vector>
// Use c++11 to compile 'g++ name.cpp -std=c++11'
using namespace std;

void print_array(vector<int> data)//Passed by value - this vecotr is a copy of the original vector
{
    data.push_back(12);
    for(int i = 0; i < data.size(); i++)
        cout<<data[i]<<"\t";
    cout<<endl;
} 
void print_array2(vector<int> &data)//Passed by reference - this is the original vector referenced through the base address
{
    data.push_back(12);
    for(int i = 0; i < data.size(); i++)
        cout<<data[i]<<"\t";
    cout<<endl;
} 
int main()
{
    vector<int>items = {1,2,3}; //Declaration and initialization
    cout<<"Passed by value"<<endl;
    print_array(items);//each time will add 12 to base vector and print 4 elements
    print_array(items);//each time will add 12 to base vector and print 4 elements
    cout<<"Passed by Reference"<<endl;
    print_array2(items);//each time will add 12 to updated vector and print 4 elements
    print_array2(items);//each time will add 12 to updated vector and print 4 elements
}