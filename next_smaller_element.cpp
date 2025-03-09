#include<iostream>
#include<stack>
using namespace std;

void nextSmaller(int arr[], int size)
{
    stack<int> st;
    int result[size];

    for(int i = 0;i<size-1;i++)
    {
        if(st.empty())
        {
            st.push(arr[i]);
        }
        
    }
}

int main()
{

}