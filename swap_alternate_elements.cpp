// Swap alternate elements
#include<iostream>
using namespace std;

void swap_alternate(int arr[], int n)
{
    for(int i = 0;i<n;i=i+2)
    {
        int j = i+1;
        if(j<n)
        {
            swap(arr[i], arr[j]);
        }
    }
}

int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;

    int arr[100];

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    swap_alternate(arr,n);

    for(int i = 0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}