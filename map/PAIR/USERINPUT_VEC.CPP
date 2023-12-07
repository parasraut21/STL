#include<bits/stdc++.h>
using namespace std;
//pair
int main(){
vector<pair<int,char>>ss;

int key;
char val;
int n;
cout<<"\nEnter size"<<endl;
cin>>n;
cout<<"Enter key and val"<<endl;
for(int i=0;i<n;i++){
    cin>>key>>val;
    ss.push_back(make_pair(key,val));
}
cout<<"Elements are"<<endl;
for(int i=0;i<ss.size();i++){
    cout<<ss[i].first<<" : "<<ss[i].second<<" | ";
}

}