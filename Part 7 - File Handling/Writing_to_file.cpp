#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

// Compile using c++11 - 'g++ Writing_to_file.cpp -std=c++11'
int main()
{
    vector<string>texts;
    texts.push_back("Hi");
    texts.push_back("I am Rudy");
    texts.push_back("Welcome here!!");

    /*
    //Getting file name from user
    string filename;
    cin>>filename;
    ofstream file(filename);
    */
    ofstream file("hello.txt");//Opens in write mode
    //ofstream file("hello.txt",ios::app)//Opens in append mode
    
    if (file.is_open())//Checking file is open or not
    {
        cout<<"Success\n";
    }

    for(string text:texts)//Writing to file
    {
        file<<text<<endl;
    }
    file.close();

}
