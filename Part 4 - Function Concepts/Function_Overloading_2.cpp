#include<iostream>
using namespace std;

struct Rectangle{
    double length;
    double breadth;
};

// Function Overloading
double area(double length, double breadth)
{
    return length * breadth;
}

double area(double length)
{
    return length * length;
}


double area(Rectangle rectangle)
{
    return rectangle.length * rectangle.breadth;
}

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.breadth = 10;

    // Function Overloading
    cout<<area(rectangle.length, rectangle.breadth)<<endl;
    cout<<area(rectangle.length)<<endl;
    cout<<area(rectangle)<<endl;
}