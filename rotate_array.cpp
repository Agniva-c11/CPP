#include<iostream>
using namespace std;
void rotated_array(int arr[], int n, int k)
{
    int temp[n];
    for(int i = 0;i<n;i++)
    {
        temp[(i+k)%n] = arr[i];
    }
    for(int i = 0;i<n;i++)
    {
        arr[i] = temp[i];
    }
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

    rotated_array(arr, n, k);

    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}