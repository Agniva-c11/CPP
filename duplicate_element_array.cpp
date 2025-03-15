// Find duplicate elements in array
#include<iostream>
using namespace std;

int find_duplicate(int arr[], int n)
{
    int ans  = 0;

    for(int i = 0;i<n;i++)
    {
        ans = ans^arr[i];
    }

    for(int i = 1;i<n;i++)
    {
        ans = ans^i;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Size:";
    cin>>n;

    int arr[100];

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Duplicates:"<<find_duplicate(arr, n);
}