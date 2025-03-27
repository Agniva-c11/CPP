#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("A");
    s.push("B");
    s.push("C");

    cout<<"Top element:"<<s.top()<<endl;
    s.pop();
    cout<<"After pop top element:"<<s.top()<<endl;

    cout<<"Size of stack:"<<s.size()<<endl;
    cout<<"Empty or not:"<<s.empty()<<endl;
}