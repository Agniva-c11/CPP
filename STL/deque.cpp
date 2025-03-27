#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);
    d.push_back(5);

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // d.pop_back();
    // d.pop_front();

    // for(int i:d)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    cout<<"Element at 1st index:"<<d.at(1)<<endl;
    cout<<"Empty or not:"<<d.empty()<<endl;
    cout<<"Front element:"<<d.front()<<endl;
    cout<<"Back element:"<<d.back()<<endl;

    cout<<"Before erase:"<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase:"<<d.size()<<endl;

    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}