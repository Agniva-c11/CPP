// Find unique element in an array
#include<iostream>
using namespace std;

int find_unique(int arr[], int n)
{
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Size:";
    cin>>n;

    int arr[100];

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Unique Element:"<<find_unique(arr, n);


}