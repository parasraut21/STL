//meerge()
//sort()
//reverse
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
int main() {
list<int>list1;
setdata(list1);
cout<<"list 1.."<<endl;
display(list1);

//sort()
list1.sort();
cout<<"sort()..list1.sort()"<<endl;
display(list1);

//reverse()
list1.reverse();
cout<<"reverse().."<<endl;
for(auto x:list1){
    cout<<x<<" ";
}cout<<endl;cout<<endl;

//list 2
cout<<"Enter second list"<<endl;
list<int>list2;
setdata(list2);
cout<<"list 2.."<<endl;
display(list2);

//merge()
list1.merge(list2);
cout<<"merge() - list1.merge(list2)"<<endl;
for(auto x:list1){
    cout<<x<<" ";
}


    return 0;
}