#include<iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    for(int i = 0;i<n;i++)
    {
        int minIndex = i;
        for(int j = i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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

    selection_sort(arr, n);

    cout<<"Sorted array:";
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}