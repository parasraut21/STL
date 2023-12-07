#include <bits/stdc++.h>
#include<map>
using namespace std;
template<class t>

void setdata(map<int,string>&mapp){
    int n;
    cout<<"Enter Size "<<endl;
    cin>>n;
    int key;
    string s;
    for(int i=0;i<n;i++){
        cin>>key>>s;
     mapp.insert({key,s});
    }
}

t swap (t a , t b){
    t temp = a;
    a = b;
    b = temp ;
    cout<<a<<" "<<b<<endl;
}

void display(map<int,string>&m){
    map<int,string>::iterator i;
    for(i=m.begin();i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second;
    }
}
int main() {
    // map<int,string>m1;
    // setdata(m1);
    // display(m1);
    swap(1,2);
    swap(1.5,2.5);
    return 0;
}



