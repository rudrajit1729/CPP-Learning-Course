#include<iostream>
#include<limits>
using namespace std;

void print_array(int ar[], int n)
{
    for(int i = 0; i < n; i++)
    cout<<ar[i]<<"\t";
    cout<<endl;
}

int main()
{
    const int SIZE = 100;
    int ar[SIZE], count = 0, i;
    for(i=0; i < SIZE; i++)
    {
        if (cin>>ar[i])//returns cin
        {
            //It worked
            count++;
        }
        else
        {
            //Invalid Input
            break;
        }
    }
    print_array(ar, count);
    cin.clear();//clears cin and brings back to working state
    //Junk still left needs to be cleared
    //cin.ignore(1000, '\n')
    cin.ignore(numeric_limits<streamsize>::max(), '\n');//clears junk in buffer
    //Testing input buffer working condition
    string test;
    cin>>test;
    cout<<test<<endl;

}