// Sum of all elements in an array
#include<iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int summ = 0;
    for(int i = 0;i<size;i++)
    {
        summ = summ + arr[i];
    }

    return summ;
}

int main()
{
    int size;
    cout<<"Enter size:";
    cin>>size;

    int arr[100];

    for(int i = 0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"Sum of array elements:"<<sumArray(arr, size);
}