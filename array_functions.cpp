// Array with functions
#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size if the array: ";
    cin>>n;

    
    int arr[n];

    // Insert elements in the array
    cout<<"Enter the array elements:";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    // Printing the array
    cout<<"Array elements:";
    printArray(arr, n);

}