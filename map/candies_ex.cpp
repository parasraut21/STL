#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
  while(t--){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int flag=0;
map<int,int>map1;
for(int i=0;i<n;i++){
    map1[arr[i]]++; // map1[arr[i]] -It will just print 0 for all values
                    // map1[arr[i]]++ -It will print second value as per it appears twice
                    
}
                         // for(x:map1){
                        //    cout<<x.sceond; --> 1 1 1 1 1
                       //           }
                      // 
                     //
cout<<endl;
for(auto x: map1){
 if(x.second>=3){
     flag=1;
 }
}
if(flag){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
    return 0;
}