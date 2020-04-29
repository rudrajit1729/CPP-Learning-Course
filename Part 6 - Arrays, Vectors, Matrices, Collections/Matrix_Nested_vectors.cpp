#include<iostream>
#include<vector>//Use c++11 to compile

using namespace std;

int main()
{
    // Multidimensional Arrays
    int data[][3] = {
                     {1, 2, 3},
                     {4, 5, 6}
                     };
    int col = sizeof(data[0])/sizeof(data[0][0]); // no of columns
    int row = sizeof(data)/sizeof(data[0]); // no. of rows
    cout<<row<<"x"<<col<<endl;

    // Printing out the array
    for (int r = 0; r < row; r++)
    {
        for(int c = 0; c < col; c++)
            cout<<data[r][c]<<"\t";
        cout<<endl;
    }
    
    // Nested Vectors
    vector<vector<int>> vdata = {
                                {1, 2, 3},
                                {4, 5, 6}
                               };
    
    int vrow = vdata.size(); // no. of rows
    int vcol = vdata[0].size(); // no. of cols
    cout<<vrow<<"x"<<vcol<<endl;

    // You can print vector in conventional way(same as array) or this range based way
    for(vector<int> ro : vdata)
    {
        for(int ele:ro)
            cout<<ele<<"\t";
        cout<<endl;
    }
}

