// greater<int> - It will print in decending order .
#include <iostream>
#include <set>
using namespace std;
int main ()
{
  set<int, greater<int>> s;
s.insert(1);
s.insert(2);
s.insert(2);
s.insert(3);
s.insert(4);

for(auto i : s){
    cout<<i<<" ";
}

  return 0;
}