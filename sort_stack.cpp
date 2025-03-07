// Sort a stack
#include<iostream>
#include<stack>
using namespace std;

// Function to insert an element into the sorted stack
void SortedInsert(stack<int> &s, int x)
{
    if (s.empty() || (!s.empty() && s.top() < x))
    {
        s.push(x);
        return;
    }
    
    int num = s.top();
    s.pop();
    
    // Recursively insert into sorted order
    SortedInsert(s, x);
    
    // Restore elements back to stack
    s.push(num);
}

// Function to sort the stack
void SortStack(stack<int> &st)
{
    if(st.empty())
    {
        return;
    }

    int num = st.top();
    st.pop();

    // Recursively sort the remaining stack
    SortStack(st);
    
    // Insert the popped element in sorted order
    SortedInsert(st, num);
}

// Function to print the stack
void PrintStack(stack<int> st)
{
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    
    s.push(9);
    s.push(4);
    s.push(1);
    s.push(5);
    
    cout << "Original Stack: ";
    PrintStack(s);

    SortStack(s);

    cout << "Sorted Stack: ";
    PrintStack(s);

    return 0;
}
