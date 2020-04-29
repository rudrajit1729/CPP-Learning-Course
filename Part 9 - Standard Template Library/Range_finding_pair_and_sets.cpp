#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

void problem()
{
    /*
    add([2,3])
    add([10,20])
    add([30,400])
    add([401,450]) - Now given a number output the interval
    */
   set<pair<int, int>> S;

     
   // Insert in any random order but it will still be sorted - BST nature
   // Pair (a, b) smaller than (c, d) iff (a<c) or (a==c and b<d)
   // Insertion takes O(logn)
   S.insert({401, 450});
   S.insert({2, 3});
   S.insert({30, 400});
   S.insert({10, 20});
   //2,3
   //10,20
   //30,400
   //401,450

   //Given no. n we will create pair p {number, INT_MAX} -> Perform upper bound -> Get one index backwards 
   // If no.present in that interval print yes else no

   int point = 13;
   auto it = S.upper_bound({point, INT_MAX});
   if(it == S.begin())// Corner case - number lower than lowest index
   {
        cout<<"NOT PRESENT\n";
   }

   it--; // One step backwards
   pair<int, int> current = *it;
   // Accessing elements of pair - pair.first , pair.second
   if(current.first <= point && point <= current.second)
   {
       cout<<"PRESENT\t"<<current.first<<" "<<current.second<<endl;
   }
   else
   {
       cout<<"NOT PRESENT\n";
   }

}

int main()
{
    problem();
}