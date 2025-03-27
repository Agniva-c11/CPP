#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_front(4);

    for(int i:l)
    {
        cout<<i<<" ";
    }

    l.erase(l.begin());
    cout<<"After erase:"<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size of list:"<<l.size()<<endl;
    cout<<"Front element:"<<l.front()<<endl;
    cout<<"Back element:"<<l.back()<<endl;

    list<int> n(5, 100);
    cout<<"Printing n:"<<endl;
    for(int i:n)
    {
        cout<<i<<" ";
    }

}