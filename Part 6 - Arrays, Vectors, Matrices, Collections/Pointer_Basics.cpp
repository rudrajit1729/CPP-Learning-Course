#include<iostream>
using namespace std;

int main()
{
    int a = 40;
    int *p = &a;// Pointer to an integer - stores the memory location of a
    cout<< "Address : "<< p << " Value : "<<*p<<endl;
    int ar[3] = {10, 20, 30};
    int *q = ar; // Pointer to integer array
    cout<< "Address : "<< q << " Value : "<<*q<<endl; // Prints the first element address and value
    q += 1; //Moves to next location -- curr value + var. size
    cout<< "Address : "<< q << " Value : "<<*q<<endl; // Prints the second element address and value
}