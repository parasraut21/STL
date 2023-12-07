//map : store value in sorted order every function TC=O(log(n))
/* 1) display using .(operator)
 2) display using ->(operator)
 4) display using simple method
 3) insert()
 5) userinput key value */

#include<map>
#include <iostream>
#include<string>
using namespace std;
// 1) display using .
void display(map<int,string>&mapp){
    cout<<"Result : .(operator)"<<endl;
    map<int,string>::iterator i;
    for(i=mapp.begin();i!=mapp.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<" "<<endl;
    }

}
// 2) display using ->
void displayy(map<int,string>&mapp){
    cout<<"Result : ->(operator)"<<endl;
    map<int,string>::iterator i;
    for(i=mapp.begin();i!=mapp.end();i++){
        cout<<i->first<<" "<<i->second<<" "<<endl;
    }
}

 //5) user input
void setdata(map<int,string>&mapp){
    cout<<"Enter size"<<endl;
    int n;
    cin>>n;
    cout<<"Enter key value pair"<<endl;
    int key;
    string s;
    for(int i=0;i<n;i++){
        cin>>key>>s;
     mapp.insert({key,s});
    }
}
int main() {
map<int,string>m;
m[1]="kakashi";//O(log(n))
m[2]="madara";

// 3) inerst()
m.insert({3,"hashirama"});
display(m);
displayy(m);

// 4) simple method for display
cout<<"Result : Using simple display method"<<endl;
for(auto &map :m){
    cout<<map.first<<" "<<map.second<<endl;
}

//user input
cout<<"User input"<<endl;
map<int,string>m2;
setdata(m2);
display(m2);

    return 0;
}