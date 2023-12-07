// Frequency and non repeatating
#include <bits/stdc++.h>
using namespace std;

int main() {
    
int n;
cout<<"Enter size"<<endl;
cin>>n;
cout<<"Enter elements of array"<<endl;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Elements are"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
    
 map<int,int>mapp;
 
 for(int i=0;i<n;i++){
     mapp[arr[i]]++;
 }
 
 map<int,int> ::iterator i;
 for(i=mapp.begin();i!=mapp.end();i++){
     cout<<"Element "<<(*i).first<<endl;//If we only run this we will get a array with elements without repeating.
     cout<<"Count "<<(*i).second<<endl;//this will give count of every element;
 }

    return 0;
}