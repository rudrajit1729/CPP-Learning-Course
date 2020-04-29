#include<iostream>
#include<cmath>

using namespace std;

double power(double base, int exp) // Declaration and Definition
{
	double result = 1;
	for(int i=1;i<=exp;i++) // Loop structure
		result = result * base;
	return result;
}

void power_void(double base, int exp) // void function returns nothing
{
	cout<< pow(base, exp);
}
int main()
{
	int base, exp;
	cout << "What's the base?:";
	cin >> base;
	cout << "What's the exponent?:";
	cin >> exp;
	double pow = power(base, exp);
	power_void(base, exp);
	cout << pow << endl;
}
