//remove_if()
/*
1) remove_if() function is used to remove all the values from the list that correspond true to the predicate or condition given as the parameter to the function
2) The function iterates through every member of the list container and removes all the elements that return true for the predicate/condition
3) predicate meaning=verb in the sentence
*/
//syntax
/*
 -->  list_name.remove_if(predicate);
 -->  parameters : The predicate in the form of a function    pointer or the function object is passed as the         parameter.
 -->  Result : Removes all the values of the container which  return true for the predicate.
*/
#include <iostream>
#include<list>
using namespace std;
void display(list<int>&t){
    cout<<"Result..";
    list<int>::iterator i;
    for(i=t.begin();i!=t.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<endl;
}
void setdata(list<int>&l){
    int n,e;
    cout<<"Enter size.."<<endl;
    cin>>n;
    cout<<"Enter elements.."<<endl;
  for(int i=0;i<n;i++){
      cin>>e;
      l.push_back(e);
  }
}
// a predicate implemented as a function:
bool iseven (const int &even){return even%2==0;};
bool single_digit(const int &digit){return digit>=10;};
int main() {
    list<int>list1;
    setdata(list1);
    display(list1);
//passing the list elements and by any condition 
//It will removeif there is any even number
list1.remove_if(iseven);
//It will remove if there is any two digit no.
list1.remove_if(single_digit);
cout<<"After removing even and two digit number"<<endl;
display(list1);

    
    return 0;
}