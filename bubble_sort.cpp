#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
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

    bubble_sort(arr, n);

    cout<<"Sorted array:";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}