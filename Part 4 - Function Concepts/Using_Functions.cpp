#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int base, exp;
	cout << "What's the base?:";
	cin >> base;
	cout << "What's the exponent?:";
	cin >> exp;
	double power = pow(base, exp);
	cout << power << endl;
}
