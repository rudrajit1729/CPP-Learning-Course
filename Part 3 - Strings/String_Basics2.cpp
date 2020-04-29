#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str, w;int n;
	cout<<"Enter the sentence : ";
	getline(cin, str);
	//str = "this is me";
	int flag = 0;
	while(str.length()>0)
	{
		n = str.find(' ');
		if(n == -1)
		{
				n = str.length();
				flag = 1;
		}
		w = str.substr(0, n);
		if (flag)
			str = str.substr(n);
		else
			str = str.substr(n+1);
		cout<<w<<endl;
	}
	//cout<<str;
}