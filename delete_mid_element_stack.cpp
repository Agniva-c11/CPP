// Delete middle element from stack
#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int>&st, int n, int current = 0)
{
    if(current==n/2)
    {
        st.pop();
        return;
    }

    int topElement = st.top();
    st.pop();

    deleteMiddle(st, n, current+1);

    st.push(topElement);
}

int main()
{
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    int n = st.size();
    deleteMiddle(st, n);

    stack<int> temp;
    while(!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }

    while (!temp.empty())
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }

    return 0;

}