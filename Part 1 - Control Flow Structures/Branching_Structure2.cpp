#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"How old are you?:";
	cin>>age;
	//Branching structure decides which block to execute based on the expressions
	switch(age)//Variable here must be an int else doesnt work
	{
		case 13:
			cout<<"You are 13\n";
			break;
		case 14:
			cout<<"You are 14\n";// Fall through without break
		default:
			cout<<"You are older than 14";//Catches remaining cases
	}
}