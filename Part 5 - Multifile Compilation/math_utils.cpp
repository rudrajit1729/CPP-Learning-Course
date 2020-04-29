#include"math_utils.h"
// struct Rectangle{
//     double length;
//     double breadth;
// };//Already defined in math_utils.h

// Collecting them under namespace
namespace utils
{
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

    double pow(double base, int pow)
    {
        double total = 1;
        for(int i = 0; i < pow; i++)
            total *= base;
        return total;
    }
}
