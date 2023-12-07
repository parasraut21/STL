// greater<int> - It will print in decending order .
#include <iostream>
#include <set>
//Multiset can contaoin duplicates
using namespace std;
int main ()
{
  multiset<int> s;

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