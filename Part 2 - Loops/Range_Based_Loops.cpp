#include<iostream>
//#include<vector>
#include<bits/stdc++.h>
using namespace std;
// Compile using c++11 --> 'g++ Range_Based_Loops.cpp -std=c++11'
int main()
{
    vector<int> data = {1,2,3,4,5,6};
    // Can be used for arrays/ STL arrays.
    // When C array passed to a function it is passed via reference and it looses track of its size
    // Thus this doesnt implicitly work in that case..Figure a way out in such case.
    for(int n:data)
    {
        // n stores data temporarily from data
        cout<<n<<"\t";
    }
    cout<<endl;
    /*
    for(int i =0;i<6;i++)
    {
        cout<<data[i]<<"\t";
    }
    cout<<endl;
    */
}