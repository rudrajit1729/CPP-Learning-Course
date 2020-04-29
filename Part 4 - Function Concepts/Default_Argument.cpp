#include<iostream>

using namespace std;

double pow(double base, int pow = 2) // Default value of pow set to 2 -- i.e. returns sqaured of base by default
{
    int total = 1;
    for(int i = 0; i < pow; i++)
        total *= base;
    return total;
}

int main()
{
    cout<<pow(3, 3)<<endl; // Passing 2 parameters -- returns 3^3 = 27
    cout<<pow(3)<<endl; // Passing 1 parameter -- returns 3^2 = 9
}