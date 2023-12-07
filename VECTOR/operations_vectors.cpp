
#include <iostream>
#include<vector>
using namespace std;
int count=0,t=0;
void display(vector<int>& ss){
    count++;
    cout<<"Result "<<endl;
    for(auto i=ss.begin();i!=ss.end();i++){
        cout<<*i<<" ";
}
    cout<<endl;
}
void setvalue(vector<int>&ss){
    t++;
      int n,e;
   cout<<"Enter size "<<endl;
   cin>>n;
   cout<<"Enter elemensts "<<endl;
   for(int i=0;i<n;i++){
       cin>>e;
       ss.push_back(e);
   }
}

int main() {
   vector<int>ss;
    vector<int>pp;
 setvalue(ss);
 setvalue(pp);
   display(ss);
    display(pp);
    
    // Swap()
    pp.swap(ss);
    cout<<"Swap()"<<endl;
      display(ss);
    display(pp);



    
    return 0;
}