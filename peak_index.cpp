#include<iostream>
using namespace std;

int peak_index(int arr[], int n)
{
    int s = 0;
    int e = n-1;
    while(s<e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
    }
    return s;
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Peak element is:"<<peak_index(arr, n);
}