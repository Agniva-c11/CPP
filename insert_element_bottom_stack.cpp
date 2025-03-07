// Insert an element at its bottom in a given stack
#include<iostream>
#include<stack>
using namespace std;

void InsertAtBottom(stack<int> &st, int x)
{
    if (st.empty())
    {
        st.push(x);
        return;
    }

    int topElement = st.top();
    st.pop();
    InsertAtBottom(st, x);

    st.push(topElement);
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
    st.push(4);

    int x = 7;

    PrintStack(st);
    InsertAtBottom(st, x);
    PrintStack(st);
}