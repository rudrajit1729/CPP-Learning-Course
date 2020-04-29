#include<iostream>
using namespace std;

// Creating a template
template<typename T> // template <class T> does the same thing
class Num
{
    T first, second;
    public:
        Num(T a, T b)
        {
            first = a;
            second = b;
        }
        T bigger();
};

template<typename T>// template <class T> does the same thing
T Num<T>::bigger()
{
    return (first>second?first:second);
}

int main()
{
    Num <int> no(14, 16); // Class template used for int data type
    cout<<no.bigger()<<endl;
    Num <double> no2(67.0, 87); // Class template used for double data type
    cout<<no.bigger()<<endl;

    Num <string> s("ABC","DEF");// Class template used for strings.
    cout<<s.bigger()<<endl;
}