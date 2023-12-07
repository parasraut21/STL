/*
set -
ordered set -
user-input
1) unique elements are present .

*/
#include <iostream>
#include<set>
using namespace std;

int main() {
set<int>s1;
set<int>i;

int n;
cout<<"Enter elemnt"<<endl;
for(int i=0;i<5;i++){
cin>>n;
s1.insert(n);
}

for(auto i : s1){
    cout<<i<<" ";
}
    return 0;
}