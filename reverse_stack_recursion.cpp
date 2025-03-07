// Reverse stack using recursion
#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &s, int x)
{
    if (s.empty())
    {
        s.push(x);
        return;
    }

    int topElement = s.top();
    s.pop();
    InsertAtBottom(s, x);

    s.push(topElement);
}

void reverseStack(stack<int> &st)
{
    // base case
    if(st.empty())
    {
        return;
    }

    int num = st.top();
    st.pop();

    reverseStack(st);

    InsertAtBottom(st, num);
}

void PrintStack(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    PrintStack(st);
    reverseStack(st);
    PrintStack(st);
}