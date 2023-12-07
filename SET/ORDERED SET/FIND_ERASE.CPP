/*
set -
find - add set<int>::iterator it
Logarithmic in size.

earse -s2.erase(s2.find(1))
For the first version (erase(position)), amortized constant.
For the second version (erase(val)), logarithmic in container size.
For the last version (erase(first,last)), linear in the distance between first and last.

*/
#include <iostream>
#include<set>
using namespace std;

int main() {
set<int>s2;
set<int>::iterator it;// To find elements we need to add ::ietarator it

int n;
cout<<"Enter element"<<endl;
for(int i=0 ;i<5;i++){
cin>>n;
s2.insert(n);
}

//Method 1) using set<int>::iterator it
it = s2.find(3);
s2.erase(it);

//method 2) using direct find()
s2.erase(s2.find(1));

for(auto i : s2){
    cout<<i<<" ";
}
    return 0;
}