#include<iostream>

using namespace std;

int main()
{
	int num = 30;//decimal 30
	int num2 = 0x30; // hexadecimal -->3*16+0=48
	int num3 = 030; // octal --> 3*8=24
	cout<<num<<endl;//prints in decimal
	cout<<hex<<num<<endl;//prints the hexadecimal equivalent
	cout<<oct<<num<<endl;//prints the octal equivalent
}