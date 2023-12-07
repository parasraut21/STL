/*upper_bound and lower_bound

 1) Vector 0r array both should be sorted so TC =O(loh(n))
otherwise Tc will be Olog(n)
 
 2) pointer for array and iterator for vector

3) Iterator lower_bound (Iterator first, Iterator last, const val) 

4) Iterator upper_bound (Iterator first, Iterator last, const val)

--> lower_bound :-
 1) It returns the address of the first oocurance of element if found otherwise it returns the address of greater element of the element .
 2) if lower_bound(a,a+n,element),element is not present and thier greater no. is also not present then it will print garbage value.
 
 --> upper_bound :-
  1) It always returns the address of the greater element of the element
  2) if upper_bound(a,a+n,element),element is not present and thier greater no. is also not present then it will print garbage value.

*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    //setdata
cout<<"Enter size :"<<endl;
int n;
cin>>n;
vector<int>pp(n);
 cout<<"Enter elements :"<<endl;
    for(int i=0;i<n;i++){
   cin>>pp[i];
    }
    
    //display
   cout<<"vector :"<<endl;
    for(int i=0;i<n;i++){
      cout<<pp[i]<<" ";
    }
    cout<<endl;

//sort(begin(),end())
cout<<"sort()"<<endl;
sort(pp.begin(),pp.end());
    for(int i=0;i<n;i++){
      cout<<pp[i]<<" ";
    }
    cout<<endl;

//upper_bound ,lower_bound
cout<<"upper_bound :- ";
auto iter=upper_bound(pp.begin(),pp.end(),3);
if(iter==pp.end()){
    cout<<"Not found"<<endl;
}
else{cout<<(*iter)<<endl;}

cout<<"lower_bound :- ";
iter=lower_bound(pp.begin(),pp.end(),3);
if(iter==pp.end()){
    cout<<"Not found"<<endl;
}
else{
cout<<(*iter)<<endl;
}
    return 0;
}