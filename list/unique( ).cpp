#include <iostream>
#include<list>
using namespace std;
void display(list<int>&lit){
    cout<<"Result :"<<endl;
    list<int>::iterator iter;
    for(iter=lit.begin();iter!=lit.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}
void setdata(list<int>&lst){
    int e,n;
    cout<<"Enter size :"<<endl;
    cin>>n;
    cout<<"Enter Elements :"<<endl;
    for(auto i=0;i<n;i++){
        cin>>e;
        lst.push_back(e);
    }
}
// a binary predicate implemented as a function:
bool same_integral_part (double first, double second)
{ return ( int(first)==int(second) ); }//no neccesarry to define ,without this it will run.

int main() {
    list<int>list1;
    setdata(list1);
    list1.unique(same_integral_part);
    display(list1);//input : 1 1 2
    //o/p: 1 2
    
    return 0;
}