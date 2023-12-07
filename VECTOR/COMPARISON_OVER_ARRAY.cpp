#include <bits/stdc++.h>
/* 1) We coppy one vector to another ;
v1 = v2; while in case array we can't . 

2)Size of arrays are fixed and  the vectors are resizable i.e they can grow and shrink as vectors are allocated on heap memory.

3) Automatic deallocation when variable goes out of scope .

4)Arrays cannot be returned unless dynamically allocated from a function whereas vectors can be returned from a function. 
vector<int> getValues(){
    vector<int> v; // Vector defined locally
    for (int i = 0; i < 10; i++) // Inserting values in Vector
        v.push_back(i + 1);
    return v; // returning pointer to array
}
 

*/
using namespace std;
void setdata(vector<int>&v){
    int n;
    cout<<"Enter elements"<<endl;
    while(n!=0){
        cin>>n;
        v.push_back(n);
    }
}
void display(vector<int>v){
    for(auto i : v){
        cout<<i<<" ";
    }
}
int main() {
vector<int>v;
setdata(v);
display(v);
    return 0;
}