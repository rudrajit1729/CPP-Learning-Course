#include<iostream>
#include <float.h>
using namespace std;

int main()
{
	float a = 10.0/3;
	a = a * 100000000000;
	double b = 77000; // or write 7.7E4 -->7.7 x 10^4
	long double c;
	cout<<a<<endl; // Print in scientific form
	cout<<fixed<<a<<endl; // Print in normal form

	cout<<"Maximum trustworthy digits:\n";
	cout<<"Float : "<<FLT_DIG<<endl;
	cout<<"Double : "<<DBL_DIG<<endl;
	cout<<"Long Double : "<<LDBL_DIG<<endl;


}