#include<iostream>
#include<stack>
using namespace std;

bool validparenthesis(string str)
{
    stack<char> s;

    for(int i = 0; i< str.length();i++)
    {
        char ch = str[i];
        if(ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            if(!s.empty())
            {
                char top = s.top();
                if ((top == '(' && ch == ')') || (top == '{' && ch == '}') || (top == '[' && ch == ']'))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    return s.empty();
}

int main()
{
    string str1 = "[{()]";

    if (validparenthesis(str1))
    {
        cout<<"Valid Parenthesis";
    }
    else
    {
        cout<<"Invalid Parenthesis";
    }
}