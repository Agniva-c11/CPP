#include<iostream>
using namespace std;

void move_zeroes(int arr[], int n)
{
    int count = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[count] = arr[i];
            count++;
        }

    }
    for(int i = count;i<n;i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    int n;
    cout<<"Enter size:";
    cin>>n;

    int arr[n];

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    move_zeroes(arr, n);

    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}