#include<iostream>
using namespace std;

int sort012(int arr[], int n)
{
    int low = 0;
    int mid = 0; 
    int high = n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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

    cout<<"Original Array:";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    sort012(arr, n);

    cout<<"Sorted Array:";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }    
}