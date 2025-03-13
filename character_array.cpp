#include<iostream>
using namespace std;

void printArray(char ch[], int n)
{
    for(int i = 0; i<n;i++)
    {
        cout<<ch[i]<<" ";
    }
}

int main()
{
    int n = 5;
    char ch[n];

    for(int i = 0;i<n;i++)
    {
        cin>>ch[i];
    }

    printArray(ch, n);
}