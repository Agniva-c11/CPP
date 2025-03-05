#include<iostream>
#include<stack>
using namespace std;

int main()
{

// Creation of stack
stack<int> s;

// Push operation
s.push(2);
s.push(3);
s.push(4);

// Pop operation
s.pop();

cout<<"Printing top element:"<<s.top()<<endl;

// Check if stack is empty or not
if (s.empty())
{
    cout<<"Stack is empty"<<endl;
}
else{
    cout<<"stack is not empty"<<endl;
}

// Size of stack
cout<<"Size of stack:"<<s.size()<<endl;
return 0;
}