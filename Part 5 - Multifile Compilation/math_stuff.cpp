#include<iostream>
#include "math_utils.h"
using namespace std;


int main()
{
    cout<<utils::pow(3, 3)<<endl; // Passing 2 args
    cout<<utils::pow(3)<<endl; // Passing 1 arg another is by default set to 2
    struct Rectangle rectangle;
    rectangle.length = 10;
    rectangle.breadth = 10;

    // Function Overloading
    cout<<utils::area(rectangle.length, rectangle.breadth)<<endl;
    cout<<utils::area(rectangle.length)<<endl;
    cout<<utils::area(rectangle)<<endl;
}