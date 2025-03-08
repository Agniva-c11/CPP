#include <iostream>
#include <stack>
using namespace std;

bool RedundantBrackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            bool isRedundant = true;
            while (!st.empty() && st.top() != '(') // Fix: Check for '('
            {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                {
                    isRedundant = false;
                }
                st.pop();
            }
            if (!st.empty()) // Fix: Pop '(' safely
            {
                st.pop();
            }

            if (isRedundant)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string str1 = "((a+b))";
    if (RedundantBrackets(str1))
    {
        cout << "Redundant brackets found!" << endl;
    }
    else
    {
        cout << "No redundant brackets!" << endl;
    }
    return 0;
}
