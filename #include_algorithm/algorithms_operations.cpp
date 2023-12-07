#include <iostream>
#include <algorithm>
#include<vector>
/*
// 1) copy() : Copies the elements in the range [first,last) into the range beginning at result.
-->copy( original_vec.begin()+from where you want to start , original_vec.begin()+how many elements , vec_which_is_to_be_copied.begin()+where you want to start );
-->copy(vec_name , vec_name+how many elements you want to copy , copied vector_name.begin() ) 

 2) copy_n : This version of copy gives the freedom to choose how many elements have to be copied in the destination container. IT also takes 3 arguments: 
 -->copy_n(vec_name, how many elements you want,copied vector_name.begin());
*/


using namespace std;
int main() {
    // 1) copy()
    // vector<int>v1={1,2,3,4,5,6};
    // vector<int>v2(6);
    // vector<int>v3(3);
    
    // cout<<"copy()"<<endl;
    // cout<<"original v1 : "<<endl;
    // for(auto x:v1){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    
    // //first 3 elements copied in the v2
    // cout<<"V2 = "<<endl;
    // copy(v1.begin(),v1.begin()+3,v2.begin());
    // for(auto x:v2){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    
    // //last three elements copied in the v3
    //   cout<<"V3 = "<<endl;
    // copy(v1.begin()+3,v1.begin()+6,v3.begin());
    // for(auto x:v3){
    //     cout<<x<<" ";
    // }
    
    // 2) copy_n()
    cout<<"copy_n() : "<<endl;
    int arr[]={10,20,30,40,50,60,70,80};
    vector<int>v1;
    v1.resize(7);   // allocate space for 7 elements
    copy_n(arr,7,v1.begin());
    cout<<"V1 : copied from array :"<<endl;
     for (vector<int>::iterator it = v1.begin(); it!=v1.end();it++){
    cout<< *it<<" ";
     }
    
    
    
    return 0;