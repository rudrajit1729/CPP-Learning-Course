#include<iostream>
#include<array>
using namespace std;
// Use c++11 to compile 'g++ name.cpp -std=c++11'

void print_array(array<int, 20> data)//Passed by value. For pass by reference use "array<int, 20> &data" instead. 
{
    for(int i = 0;i<data.size(); i++)
        cout<<data[i]<<"\t";
    cout<<endl;
}

int main()
{
    array<int, 20> ar = {1,2,3,4,5}; //Initialized only 5 blocks. Rest will be initialized by 0
    print_array(ar); // zeros will be appended till the size - to avoid keep count of entered elements and pass that as argument.
}