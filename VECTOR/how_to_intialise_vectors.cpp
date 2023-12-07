#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &vec) // we have sent address of vector
{
    // using array simple method
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    // using iterator
    vector<int>::iterator i;
    for (i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << " ";
    }
}
int main()
{
    vector<int> v;
    v.assign(4, 12); // we have assigned  4 int space 12 will print 4 times

    cout << "VECTORS are" << endl;
    display(v);

    return 0;
}