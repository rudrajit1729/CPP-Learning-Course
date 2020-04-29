#include<iostream>
#include<string>
using namespace std;

int main()
{
	string greeting = "Hello"; //String is a class and greeting is the object of this class
	cout<<greeting + " There"<<endl;//String concatenation
	string complete_greeting = greeting + " There";//Concatenation
	cout<<complete_greeting<<endl;
	complete_greeting += "!"; //Appending to a string
	cout<<complete_greeting<<endl;


	// User input
	cout<<"Enter your string : ";
	string ip, leftover;
	cin>>ip; //only fetches first word(input terminated by white spaces)
	cin>>leftover;//fetch 2nd word(again will be terminated if encounters white spaces)
	cout<<ip;
	cout<<leftover<<endl;

	//Resolved using getline
	fflush(stdin);
	cout<<"Enter your string again :";
	getline(cin, ip);
	cout<<ip<<endl;
	cout<<"Enter your string again :";
	fflush(stdin);
	getline(cin, ip);
	cout<<ip<<endl;
	

}