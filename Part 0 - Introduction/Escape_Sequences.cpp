#include<iostream>
using namespace std;
int main()
{
	cout<<"Hello\tThere\n"; // \t for tab spacing \n for new line
	cout<<"Hello\bThere\0 \n"; // \b for backslashing a character \0 for null string
	cout<<"\"Hello\"\v\'There\'\n"; // \" for double quotes \v for vertical tabs \' for single quotes

}