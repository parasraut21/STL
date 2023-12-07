
#include <iostream>
#include <vector>
using namespace std;
int count = 0, t = 0;
void display(vector<bool> &ss)
{
    count++;
    cout << "Result .." << endl;
    for (auto i = ss.begin(); i != ss.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
}
void setvalue(vector<bool> &ss)
{
    t++;
    int n, e;
    cout << "Enter size .." << endl;
    cin >> n;
    cout << "Enter elemensts .." << endl;
    for (auto i = 0; i < n; i++)
    {
        cin >> e;
        ss.push_back(e);
    }
}

int main()
{
    vector<bool> ss;
    setvalue(ss);
    display(ss);
    //flip() = if = 1111 then result = 0000 
    ss.flip();
    cout<<"flip()=this will change to opposite "<<endl;
    display(ss);

    vector<bool> sspp;
    sspp.push_back(1);
    sspp.push_back(1);
    sspp.push_back(1);
    sspp.push_back(1);

    vector<bool> paras;
    paras.push_back(0);
    paras.push_back(0);
    paras.push_back(0);
    paras.push_back(0);

    // This will swap both vectors first element
    sspp.swap(sspp[0], paras[0]);
    cout << "This will swap both vectors first element" << endl;
    display(sspp);
    display(paras);

    // This will swap front of 1 st element and last element of second vector
    paras.swap(paras.front(), paras.back());
    cout << "This will swap front element of 1st vector and last element of second vector" << endl;
    display(sspp);
    display(paras);
    return 0;
}