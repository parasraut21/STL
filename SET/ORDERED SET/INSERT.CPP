/*
set -
ordered set -
1) unique elements are present .
2) elements are in sorted order .
3) Random access is not possible .

If N elements are inserted, Nlog(size+N).
Implementations may optimize if the range is already sorted.
*/
#include <iostream>
#include<set>
using namespace std;

int main() {
set<int>s1;
s1.insert(2);
s1.insert(1);
s1.insert(3);
s1.insert(2);
s1.insert(3);
s1.insert(0);


set<string>s2;
s2.insert("Paras");
s2.insert("paras");
s2.insert("Paras");
s2.insert("Raut");
s2.insert("Raut");
s2.insert("Raut");

for(auto i : s1){
    cout<<i<<" ";
}
for(auto i : s2){
    cout<<i<<" ";
}
    return 0;
}