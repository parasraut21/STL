//map
//find()
//count()
#include <bits/stdc++.h>
using namespace std;
void display(map<int ,string>&pp){
    cout<<"Map 1 :"<<endl;
    map<int,string>::iterator i;
    for(i=pp.begin();i!=pp.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
}
void setdata(map<int,string>&pp){
    cout<<"Enter size :"<<endl;
    int n;
    cin>>n;
    int key;
    string str;
    cout<<"Enter pair"<<endl;
    for(int i=0;i<n;i++){
        cin>>key>>str;
        pp.insert({key,str});
    }
}
int main() {
map<int,string>pp,ss;
// setdata(pp);
// display(pp);

ss[1]="Kakashi";
ss[2]="Katake";
ss[3]="Ghost Of Uchiha";
ss[4]="Madara Uchiha";
cout<<"Map 2"<<endl;
for(auto &mapp:ss){
    cout<<mapp.first<<" "<<mapp.second<<endl;
}

  //find()
  cout<<"find()"<<endl;
 map<int,string>::iterator it;
    for(it=ss.begin();it!=ss.end();it++){
         if (it ==ss.find(3)){
     cout<<ss.find(4)->second<<endl;
     break;
  }
    }

//count()
cout<<"count()"<<endl;
  // checks if key 1 is present or not
    if (ss.count(4))
        cout << "The key 4 is present\n";
    else
        cout << "The key 4 is not present\n";
  
    // checks if key 100 is present or not
    if (ss.count(5))
        cout << "The key 5 is present\n";
    else
        cout << "The key 5 is not present\n";
  
    return 0;



 

    return 0;
}