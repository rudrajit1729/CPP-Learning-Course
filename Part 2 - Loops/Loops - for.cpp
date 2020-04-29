#include<iostream>
using namespace std;

int main()
{
    int fact = 7;
    int factorial = 7;
    for(int i = fact-1;i>=1;i--)
    {
        factorial *= i;
    }
    cout<<factorial<<endl;
}
