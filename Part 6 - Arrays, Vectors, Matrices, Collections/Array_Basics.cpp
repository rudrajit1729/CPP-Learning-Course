#include<iostream>

using namespace std;

void print_array(int ar[], int size)
{
    //cout<<sizeof(ar)/sizeof(ar[0])<<endl;//Doesnt know the size
    for(int i =0;i < size; i++)//Printing elements of array
        cout<<ar[i]<<"\t";
}
int main()
{
    int ar[] ={1,2,3,4,5};
    /* Ways to declare arrays
    int ar[size];
    int ar[]={elements,.....};
    */
    int size = sizeof(ar)/sizeof(ar[0]);
    //for(int i =0; i < size; i++)// The Default elements are 0 when some are elements are defined and garbage value when nothing is defined
    //    cout<<ar[i]<<"\t";
    cout<<size<<endl;
    print_array(ar,size); //Passing array to a function

}