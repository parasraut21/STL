/*
unoredered_set -
Tc -
insertion - n
deletion - n

contain unique elements
implement using hashing
unsorted order
*/
#include <iostream>
#include <unordered_set>
using namespace std;
int main ()
{
  unordered_set<int> s;

s.insert(5);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(4);
 

 for(auto i : s){
    cout<<i<<" ";
}

  return 0;
}