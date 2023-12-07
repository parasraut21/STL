/* In the case of a normal vector we initialize it as:
    1. vector<datatype> variable_name
    Now in the case of a 2D vector all we do is create
    a vector of datatype vector.
    We simply replace "datatype" with "vector<int>":
    1. vector<vector<int>> variable_name  */
      

#include <bits/stdc++.h>
using namespace std;

int main() {
vector<vector<int>> vect;
    int r;
    cout<<"****Enter number of rows****"<<endl;
    cin>>r;
     int c;
    cout<<"****Enter number of colms****"<<endl;
    cin>>c;

    cout<<"****Enter Elements****"<<endl;
  
 
 for (int i = 0; i < r; i++)
    {   vector<int> row; 
        for (int j = 0; j < c; j++)
        {   int value;
            cin>>value;
            row.push_back(value);
        }  
        vect.push_back(row);  
    }

    // method 1
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << vect[i][j] << " ";
        }    
        cout << endl;
    }

//   //  method 2
//   for (vector<int> vect : vect)
//     {
//         for (int x : vect)
//         {
//             cout << x << " | ";
//         }    
//         cout << endl;
//     }
  
//     cout<<vect[0][1];
  
    return 0;
}