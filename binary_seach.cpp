#include<iostream>
using namespace std;

void binary_search(int arr[], int n, int key)
{
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]==key)
        {
            cout<<"Element found at index:"<<mid;
            return;
        }
        else if(arr[mid]>key)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
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

    int key;
    cout<<"Enter key:";
    cin>>key;

    binary_search(arr, n, key);

    return 0;

}