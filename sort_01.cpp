#include<iostream>
using namespace std;

int sort01(int arr[], int n)
{
    int i = 0;
    int j = n-1;

    while(i<=j)
    {
        if (arr[i]==0)
        {
            i++;
        }
        else if(arr[j]==1)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
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
    cout<<endl;

    sort01(arr, n);

    cout<<"Sorted Array:";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}