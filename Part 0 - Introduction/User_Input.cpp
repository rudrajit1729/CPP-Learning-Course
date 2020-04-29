#include <iostream>
using namespace std; // Using Directives
//using std::cout; //only making the particular function available

int main()
{
	int slices;
	cout<<"How many slices:";
	cin>>slices; // cin instance of istream. Takes input from console 
	cout<<"You have "<<slices<<" slices"<<endl; 
	return 0;
}