#include<iostream>
using namespace std;

int toggle_element(int n)
{
    if (n==0)
    {
        return 1;
    }
    int mask = 0;
    int temp = n;

    while(temp>0)
    {
        mask = (mask<<1) | 1;
        temp>>=1;
    }

    return n^mask;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int result = toggle_element(n);
    cout<<result;
}