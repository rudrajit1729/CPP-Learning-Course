#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    set<int> S;
    // Each opn takes O(logn)
    // Set is represented as a Balanced BST in memory - For insertion / deletion maximum it has to traverse is height of the tree
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);
    // -10, -1, 1, 2
    for(int x : S)
        cout<<x<<" ";
    cout<<endl;

    auto it = S.find(-1); // If present returns the pointer / index else returns S.end() i.e. the end of the set
    if(it == S.end())
        cout<<"Not present\n";
    else
        cout<<"Present\t"<<*it<<endl;

    // -10, -1, 1, 2
    auto it2 = S.lower_bound(-1); // >=
    auto it3 = S.upper_bound(0); // >
    auto it4 = S.upper_bound(2); // returns S.end()

    cout<< *it2<< " "<< *it3<< *it4<<endl;// returns value at those index

    if(it4 == S.end())
        cout<<"Not found\n";

}

