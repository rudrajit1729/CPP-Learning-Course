#include<iostream>
#include<climits>
using namespace std;
int main()
{
	short a; // 8 bit min
	int b; // 16 bit min
	long c; // 32 bit min
	long long d; // 64 bit min
	// Only for +ve numbers
	unsigned short aa;
	unsigned int bb;
	unsigned long cc;
	unsigned long long dd;

	//Printing size in bytes
	cout<<"Size in Bytes:\n";
	cout<<"Signed numbers:\n";
	cout << "Size of short:"<<sizeof(short)<<endl;
	cout << "Size of int:"<<sizeof(int)<<endl;
	cout << "Size of long:"<<sizeof(long)<<endl;
	cout << "Size of long long:"<<sizeof(long long)<<endl;
	cout<<"Unsigned Numbers:\n";
	cout << "Size of unsigned short:"<<sizeof(unsigned short)<<endl;
	cout << "Size of unsigned int:"<<sizeof(unsigned int)<<endl;
	cout << "Size of unsigned long:"<<sizeof(unsigned long)<<endl;
	cout << "Size of unsigned long long:"<<sizeof(unsigned long long)<<endl;

	// Printing the range of values
	cout << "\nRange of Values\n";
	cout << "Signed numbers:\n";
	cout << "Range of short: "<<SHRT_MIN<<" <-> "<<SHRT_MAX<<endl;
	cout << "Range of int: "<<INT_MIN<<" <-> "<<INT_MAX<<endl;
	cout << "Range of long: "<<LONG_MIN<<" <-> "<<LONG_MAX<<endl;
	cout << "Range of long long: "<<LLONG_MIN<<" <-> "<<LLONG_MAX<<endl;
	cout<<"Unsigned Numbers:\n";
	cout << "Range of unsigned short: "<<"0"<<" <-> "<<USHRT_MAX<<endl;
	cout << "Range of unsigned int: "<<"0"<<" <-> "<<UINT_MAX<<endl;
	cout << "Range of unsigned long: "<<"0"<<" <-> "<<ULONG_MAX<<endl;
	cout << "Range of unsigned long long: "<<"0"<<" <-> "<<ULLONG_MAX<<endl;

}