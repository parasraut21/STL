
#include <iostream>
#include<vector>
using namespace std;
int count=0,t=0;
void display(vector<int>& ss){
    count++;
    cout<<"Result .."<<endl;
    for(auto i=ss.begin();i!=ss.end();i++){
        cout<<*i<<" ";
}
    cout<<endl;
}
void setvalue(vector<int>&ss){
    t++;
      int n,e;
   cout<<"Enter size .."<<endl;
   cin>>n;
   cout<<"Enter elemensts .."<<endl;
   for(int i=0;i<n;i++){
       cin>>e;
       ss.push_back(e);
   }
}

int main() {
   vector<int>ss;
 
   ss.assign(7,2); //assign() we have given size 7 and input 2 (2 will print 7 times)
   cout<<"assign().."<<endl;
   display(ss);
   
   //insert()
   vector<int>::iterator it=ss.begin()+1;
 // ss.insert(it,69);//it will print 69 at 2nd position
  // display(ss);
  cout<<"insert().."<<endl;
   ss.insert(it,2,69);//it will print two copies of 69
    display(ss);
    
    vector<int>sspp;
    cout<<"Make 6 sized vector"<<endl;
    setvalue(sspp);
    
     // erase the 6th element
 sspp.erase (sspp.begin()+5);
 cout<<"Erase 6th element"<<endl;
display(sspp);

  // erase the first 3 elements:
  sspp.erase (sspp.begin(),sspp.begin()+3);
  cout<<"Erase first 3 interger"<<endl;
    display(sspp);
    
    // front() back()
    cout<<"front() back()"<<endl;
    sspp.front()=69;
    sspp.back()=69;
    display(sspp);
    
    return 0;
}