// Total no of occurence of a number in an array
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

    int k;
    cout<<"Enter k:";
    cin>>k;

    int arr[n];

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    int first = firstocc(arr, n, k);
    int last = lastocc(arr, n, k);

    int total = (last-first)+1;
    cout<<"Total no of occurences:"<<total<<endl;
}