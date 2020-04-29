#include<iostream>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;

void mapDemo()
{
    cout<<"Map Demo\n";
    map<int, int> A;
    // Accessing and initialising values in map
    // Map is represented as a Balanced BST thus insertion/deletion takes O(logn) [ height of the tree ]
    // In the BST key is the parameter for arranging the nodes and each node contains the value
    // Same for sets with the difference that there we don't have values associated with the nodes as in map
    // All set algo can be scaled to maps
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[10023] = 1;

    // Find - A.find(key)
    // Delete - A.erase(key)

    map<char, int> cnt;
    string s = "rudrajit";
    // Frequency checked in O(nlogn)
    for(char x :s)
        cnt[x]++;
    cout<<cnt['r']<<endl;
}

void unorderedMapDemo()
{
    cout<<"Unordered Map Demo\n";
    map<char, int> M;
    unordered_map <char, int> U;
    string s = "rudrajit";

    for(char c:s) M[c]++; // O(Nlogn) N = |s| -> Gets and sets values in O(logn) time  - Doing for string length n thus O(nlogn)
    for(char c:s) U[c]++; // O(N) -> Gets and sets values in O(1) time  - Doing for string length n thus O(n)
    cout<<U['r']<<endl;
    //add(key, value) - O(logn),O(1)
    //erase(key) - O(logn), O(1) 

    /*
    Why unordered maps are so fast?
    U['c']++;-->'c'-----> hash(char)----->x(Large no.)
    Hash Table of size M is maintained
    x%M =  to get the index - Math computation takes O(1)
    In case of collision (resolved using linear probing) time can reach upto O(n)
    */
}
int main()
{
    mapDemo();
    unorderedMapDemo();
}
