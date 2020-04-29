#ifndef MATH_UTILS // Preprocessor directive - Define iff not defined already
#define MATH_UTILS
struct Rectangle{
    double length;
    double breadth;
};
// Collecting them under a namespace
namespace utils
{
    // Function Declarations
    double area(double length, double breadth);

    double area(double length);

    double area(Rectangle rectangle);

    double pow(double base, int pow = 2);
    #endif
}
