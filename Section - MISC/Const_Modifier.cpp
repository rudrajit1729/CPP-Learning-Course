#include<iostream>
using namespace std;

void print_array(const int data[], int size)
{  
    // You can't change value of elements in this function 
    //data[0]++;//Generates error
    for (int i = 0; i < size; i++)
        cout<<data[i]<<"\t";
    cout<<endl;
}

void print_array2(int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        data[i]++;// Value changed here will reflect original values
        cout<<data[i]<<"\t";
    }
    cout<<endl;
}

int main()
{
    int data[] = {1, 2, 3};
    // Array is passed by reference so if we don't want to change content of element we should use const in the function parameter.
    print_array(data, 3);
    cout<<"Value at index 0 : "<<data[0]<<endl; // No change in actual content of array
    print_array2(data, 3);
    cout<<"Value at index 0 : "<<data[0]<<endl; // Change in values
    
}