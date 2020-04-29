#include<iostream>
using namespace std;

template <class T>
class Identify
{
    public:
        Identify(T x)
        {
            cout<<x<<"\tis not a character!\n";
        }
};

// Specifying for char data type

// If characcter then comes to this special class else goes to the above class
template<>
class Identify<char>{
    public:
        Identify(char x)
        {
            cout<<x<<"\tis a character!\n";
        }
};


int main()
{
    Identify <int> obj1(7);
    Identify <double> obj2(3.1415);
    Identify <char> obj3('q');
}