#include<iostream>
# define X 10 //Macro

using namespace std;
int main()
{
	const int x = 5; // Symbolic const
	//x = 10; // Generates error
	enum { y=100};
	//y = 50; // Generates error
	cout << x<<" "<<X<<" "<<y<<endl;
}