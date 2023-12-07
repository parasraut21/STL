#include<bits/stdc++.h>
using namespace std;
//Tc : O(nlogn)
int main(){
    vector<int>v;
   int n,e;
   cout<<"Enter size"<<endl;
   cin>>n;
   cout<<"Enter elements"<<endl;
   for(int i=0;i<n;i++){
       cin>>e;
       v.push_back(e);
   }
   
   sort(v.begin(),v.end());
   
    cout<<"Elements are"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }

}