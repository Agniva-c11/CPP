#include<iostream>
using namespace std;

int main()
{
    int number[15];

    // cout<<number[0]<<endl;

    int arr[3] = {1, 2, 3};

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;

    int n = 12;
    int arr1[n];

    // Insert elements in array
    cout<<"Inserting the elements:";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    // Print the array

    cout<<"Printing the elements:";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }



    return 0; 
}