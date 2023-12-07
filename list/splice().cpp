/*splice()
The list.splice() is a built-in function in C++ STL which is used to transfer elements from one list to another.*/
//-->The splice() function can be used in three ways:

/* 1) Transfer all the elements of list x into another list at some position.
-->list1_name.splice (iterator position, list2)

 2) Transfer only the element pointed by i from list x into the list at some position.
-->list1_name.splice (iterator position, list2, iterator i)

 3) Transfers the range [first, last) from list x into another list at some position.
-->list1_name.splice (iterator position, list2, iterator first, iterator last)*/



/*Parameters: 
-->The function accepts four parameters which are specified as below: 

position – Specifies the position where the elements are to be transferred.
list2 – It specifies a list object of the same type which is to be transferred.
i – It specifies an iterator to the position of an element in list2 which is to be transferred.
first, last – Iterators specifying a range of elements in list2 which is to be transferred in list1. The range includes all the elements between first and last, including the element pointed by first but not the one pointed by last.
*/
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

int main() {
    list<int>list1;
    setdata(list1);
    display(list1);
    list<int>list2={2,3,4,5};
   display(list2);
   
//   // 1) Tranfer all elements
//   cout<<"Transfering all elements"<<endl;
//     list1.splice(list1.begin(),list2);//list1.begin()=It will append at the front.
//     //list1.end()=it will append at the end.
//     display(list1);//list2=empty


// // 2) Transfering sinle element
// list<int>::iterator iter;
// iter=list2.begin();//pointing to that element
// advance(iter,2);//It will increment by 2(pointing to 3rd place)
// list1.splice(list1.end(),list2,iter);
//     cout << "Transfering single element"<< endl;
//     for (auto x : list1)
//         cout << x << " ";

// // 3) Transfering the range
// list<int>::iterator iter;
// iter=list2.begin();//pointing to the first element
// advance(iter,2);//It will increment by 2(pointing to 3rd place)
// list1.splice(list1.end(),list2,iter,list2.end());
// //splice(append position,tranfering list name,first elemt,last element)
//           cout << "Transfering the range"<< endl;
//     for (auto x : list1)
//         cout << x << " ";
   
    
    return 0;
}