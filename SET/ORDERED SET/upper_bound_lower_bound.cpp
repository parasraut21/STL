// greater<int> - It will print in decending order .
//lower bound = element if present if not the greater than element .
//upper bound = always give you greater thean element
#include <iostream>
#include <set>
using namespace std;
int main ()
{
  set<int> s;
  set<int>:: iterator p;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(6);
 
for(auto i : s){
    cout<<i<<" ";
}
cout<<endl;

cout<<"****upper_bound****"<<endl;
 p=s.upper_bound(2);
 cout<<"upper_bound of 2 : "<<*p<<endl;
 p=s.upper_bound(3);
 cout<<"upper bound of 3 : "<<*p<<endl;
 p=s.upper_bound(4);
 cout<<"upper bound of 4 : "<<*p<<endl;
  p=s.upper_bound(5);
 cout<<"upper bound of 5 : "<<*p<<endl;

cout<<"****lower_bound****"<<endl;
 p=s.lower_bound(3);
 cout<<"lower_bound of 3 : "<<*p<<endl;
 s.erase(p);
 for(auto i : s){
    cout<<i<<" ";
}

  return 0;
}