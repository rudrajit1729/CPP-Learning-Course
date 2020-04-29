#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> A = {11, 2, 3, 14};
    
    A.push_back(100); // Can be used as stack. Also A.pop_back(element) to delete elements
    
    sort(A.begin(), A.end());//O(nlogn)
    
    //2, 3, 11, 14, 100
    //O(logn)
    bool present = binary_search(A.begin(), A.end(), 3); // true
    present = binary_search(A.begin(), A.end(), 5); // false

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //2, 3, 11, 14, 100, 100, 100, 100, 100, 123
    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100); // >= returns pointer to value which is >= 100
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 100); // > returns pointer to value which is > 100 

    //Short way to write this
    //auto it = lower_bound(A.begin(), A.end(), 100); // >= returns pointer to value which is >= 100
    //auto it2 = upper_bound(A.begin(), A.end(), 100); // > returns pointer to value which is > 100
    
    cout<<*it<<" "<<*it2<<endl;//value at the indexes - 100 123 (first occurance of 100, (last occurance of 100)+1)
    cout<<it2 - it<<endl;//5 no. of occurances of the number
   
    for(int &x :A)//Reference
    {
        x++;//Change affeected in original vector
    }
    
    for(int x :A)//Value
    {
        cout<<x<<" ";
    }
    cout<<endl;

}