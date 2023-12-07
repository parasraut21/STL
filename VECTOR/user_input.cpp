#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v) // we have sent address of vector
{
    // using array simple method
    cout << "Normal Method" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // using iterator
    cout << "Using iterator method" << endl;
    vector<int>::iterator i; //or we can simply ignore this and write auto in front of i

    for (i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    cout<<"\nusing auto keyword\n";
    for(auto &p:v){
        cout<<(p)<<" ";
    }

}
int main()
{
    vector<int> v2;
    int n, e;
    cout << "Enter size" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        v2.push_back(e);
    }
    cout << "Result.." << endl;
    display(v2);
    return 0;
}