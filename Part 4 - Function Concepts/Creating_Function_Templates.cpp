#include<iostream>
#include<string>
//using namespace std; // Using this we have to rename our func as swap already exists

template <typename T>
void swap(T &a, T &b) // swaps individual elements
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void swap(T a[], T b[], int size) // Overloading function templates - swaps arrays
{
    for (int i = 0; i< size; i++)
    {
        swap(a[i], b[i]);
    }
}

int main()
{
    int a = 10, b = 20;
    std::string x = "ab", y = "ba";
    swap(a, b);
    std::cout<<"a = "<<a<<" "<<"b = "<<b<<std::endl;
    swap(x, y);
    std::cout<<"x = "<<x<<" "<<"y = "<<y<<std::endl;

    // Overloading function template
    int const SIZE = 6;
    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};
    for(int i = 0; i < SIZE; i++)
        std::cout<<nines[i]<<" "<<ones[i]<<"\t";
    std::cout<<"\n\n";
    swap(nines, ones, SIZE);
    for(int i = 0; i < SIZE; i++)
        std::cout<<nines[i]<<" "<<ones[i]<<"\t";
    std::cout<<"\n\n";
}