//0)assign()
//1)insert() 
// 2)empty list , user define list 
// 3) list define with size
//4)push_back()
// 5)remove() , 6) remove_if()
// 7)pop_front() ,pop_back()





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

int main() {
  //0)assign()
    cout<<"assign(3,69)"<<endl;
    list<int>list0;
    list0.assign(3,69);
     //or we can do thus also: list<int>list0(3,69)
    display(list0);
    
    // 1)insert
    list<int>::iterator it=list0.begin();//wecan iterate like this begin()+2
    list0.insert(it,2);
    cout<<"insert(it,2)"<<endl;
    display(list0);
     list0.insert(it,3,21);
    cout<<"insert(it,3,21)=two copies of 21"<<endl;
    display(list0);
    
    // 2) empty list
    list<int>list1;//List initialised with zero size
    list1.push_back(4);
    cout<<"Empty List With Zero Size"<<endl;
    display(list1);// 4
    
    // 3)list define with size
    list<int>list2(3,2);//list initialised with size 3 and 2 3 times
   cout<<"Empty List With Size 3"<<endl;
 display(list2);// 2 2 2
 
 //push_back()
    list<int>::iterator i=list2.begin();
    list2.push_back(5);
     cout<<"Empty List With Size 3 and append 5(we can inc size)"<<endl;
    display(list2);// 2 2 2 5
  
    //remove()
  list2.remove(5);//remove 5
  cout<<"remove(5);"<<endl;
   display(list2);// 2 2 2 
  //remove()
    list2.remove(2);
    cout<<"remove(2) means it will remove all the 2"<<endl;
     display(list2);// Empty (it has removed all the 2)
    
    //pop_front() pop_back()
    list<int>list3(3,69);
    cout<<"Before..pop()"<<endl;
    display(list3);
    cout<<"pop_front() & pop_back()"<<endl;
    list3.pop_front();
    list3.pop_back();
    display(list3);
    
    return 0;
}