// Find the pivot element in a rotated sorted array
#include<iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s= 0;
    int e = n-1;
    int mid= s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid]>arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}

int main()
{
    int arr[5] = {4, 5, 1, 2, 3};
    cout<<"Pivot element is at index:"<<getPivot(arr, 5)<<endl;
}