#include<iostream>

namespace utils
{
    void print_array(int data[], int size)
    {
        for(int i =0; i < size; i++)
            std::cout<<data[i]<<"\t";
        std::cout<<std::endl;
    }
}

int main()
{
    int data[] = {1, 2, 3};
    utils::print_array(data, 3);
}