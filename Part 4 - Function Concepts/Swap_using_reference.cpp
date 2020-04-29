#include<iostream>

using namespace std;

void swap(int &a, int &b) // Pass by reference
{
    int temp = a;
    a = b;
    b = temp;
    cout<< "a = "<<a<<", b = "<<b<<endl;
}
int main()
{
    int a = 20;
    int b = 10;
    swap(a, b);
    // Here value would remain the same if it hadnt been passed by reference
    cout<< "a = "<<a<<", b = "<<b<<endl;
}