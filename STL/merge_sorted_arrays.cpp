#include<iostream>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m)
{
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j < m)
    {
        if(arr1[i]<arr2[j])
        {
            arr1[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr1[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<n)
    {
        arr1[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m)
    {
        arr1[k] = arr2[j];
        k++;
        j++;
    }
}

int main()
{
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {2, 3, 4};

    merge(arr1, 3, arr2, 3);

    for(int i = 0;i<6;i++)
    {
        cout<<arr1[i]<<" ";
    }
}