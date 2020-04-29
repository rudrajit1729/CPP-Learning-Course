#include<iostream>

using namespace std;

void swap(int &a, int &b) // Pass by reference
{
    int temp = a;
    a = b;
    b = temp;
    cout<< "a = "<<a<<", b = "<<b<<endl;
}

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 20;
    int b = 10;
    swap(a, b);

    string first_name = "rudrajit", last_name = "choudhuri";
    swap(first_name, last_name); // Function overloading  

    /*
    Function Overloading -  Multiple functions with same names provided they have
    1. Atleast one different data type of parameter(if no. of parameters same) or,
    2. Different no. of parameters
    */

    // Here value would remain the same if it hadn't been passed by reference
    cout<<first_name<<" "<<last_name<<endl;
    cout<< "a = "<<a<<", b = "<<b<<endl;
    
     
}