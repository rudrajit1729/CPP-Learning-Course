#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x = -1.5, y = 10, z = 3.25;
	cout<< sqrt(25)<<" " <<sqrt(-25)<<" "<< pow(9,9999) <<" " << pow(-9, 9999)<<endl; //Cases when special nos occur
	cout<<NAN<<" "<<INFINITY<<" " <<-INFINITY<<endl; // Printing out special numbers
	cout<<remainder(y, z)<<endl; // remainder after division (maybe float  10%3.25 doesnt work) fmod(y, z) does same work
	cout<< ceil(x)<<" "<<round(x)<<" "<<trunc(x)<<" "<<floor(x)<<endl; // Check what rounding up functions do
	cout<<fmax(y,z)<<" "<<fmin(y,z)<<" "<<abs(x)<<endl; //max , min, abs value

}