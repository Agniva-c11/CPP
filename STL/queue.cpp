#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("A");
    q.push("B");
    q.push("C");

    cout<<"First element:"<<q.front()<<endl;
    cout<<"Last element:"<<q.back()<<endl;
    cout<<"Size of queue:"<<q.size()<<endl;
    cout<<"Empty or not:"<<q.empty()<<endl;

    q.pop();
    cout<<"After pop first element:"<<q.front()<<endl;
    cout<<"Size of queue:"<<q.size()<<endl;
}