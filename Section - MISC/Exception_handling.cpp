#include<iostream>
using namespace std;

int main()
{
    try
    {
        int momsAge = 30, sonsAge = 34;
        
        if(momsAge<sonsAge)
            throw 99;//error number(can be int, char) user defined
        
    }
    catch(int x)
    {
        cout<<"Son can't be older than mom! ERROR NO : "<<x<<endl;
    }
    catch(...)
    {
        cout<<"All remaining undefined exceptions handled in this block!\n";
    }
    cout<<"Finally this block will be executed\n";
    //block of code
}