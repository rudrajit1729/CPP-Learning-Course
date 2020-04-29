#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"How old are you?:";
	cin>>age;
	//Branching structure decides which block to execute based on the expressions
	if(age<13)
	{
		cout<<"You are not old enough :(\n";
	}
	else if (age<19)
	{
		cout<<"You are almost 19\n";
	}
	else
	{
		cout<<"Welcome to sad life :)\n";
	}

	/*
	Logical and comparison operators
	use them to tackle longer expressions
	Logical 
	&&, ||, ! --> Logical AND, OR, NOT

	Coparison
	< > == != <= >=
	*/
	return 0;
}