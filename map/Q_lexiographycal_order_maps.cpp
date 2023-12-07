//question on map
// What is lexicographic order of numbers?
// When applied to numbers, lexicographic order is increasing numerical order
#include <bits/stdc++.h>
using namespace std;
/*Given n string ,print unique strings in lexiographycal order with their frequency */

int main() {
map<string,int>m;
cout<<"Enter size"<<endl;
int n;
cin>>n;
string s;
cout<<"Enter string"<<endl;
for(int i=0;i<n;i++){
    cin>>s;
    m[s]++;
}
cout<<"Result :"<<endl;//Its print the frequency of string that was entered how many times
for(auto &pair:m){
    cout<<pair.first<<" "<<pair.second<<" "<<endl;
}


    return 0;
}