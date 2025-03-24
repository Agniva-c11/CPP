// You are given an array consisting of N elements. You are given integer K. Task is to find the first and last
// ocuurance of K.

#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int k)
{
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==k)
        {
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>k)
        {
            e = mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

int lastocc(int arr[], int n, int k)
{
    int s = 0;
    int e = n-1;
    int ans = -1;

    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==k)
        {
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]>k)
        {
            e = mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
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

    int k;
    cout<<"Enter k:";
    cin>>k;

    cout<<"First occurence:"<<firstocc(arr, n, k)<<endl;
    cout<<"Last occurence:"<<lastocc(arr, n, k)<<endl;

}