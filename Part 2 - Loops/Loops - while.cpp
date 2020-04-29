#include<iostream>
using namespace std;

int main()
{
    int fact = 8;
    int i = fact - 1;
    while(i>0)
    {
        fact *= i;
        i--;
    }
     cout<<fact<<endl;
     return 0;
}