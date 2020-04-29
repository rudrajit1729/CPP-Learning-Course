#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main()
{

    /*
    //Getting file name from user
    string filename;
    cin>>filename;
    ofstream file(filename);
    */
    ifstream file("hello.txt");//Opens in read mode - fails if file not present
    
    if (file.is_open())//Checking file is open or not
    {
        cout<<"Success\n";
    }
    string line;
    while(getline(file, line))
    {
        cout<<line<<endl;
    }
}
