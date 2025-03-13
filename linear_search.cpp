// Linear Search
#include<iostream>
using namespace std;

bool lin_search(int arr[], int n, int x)
{
    for(int i = 0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return true;
        }
       
    }
    return false;
}

int main()
{
    int arr[100];

    int n;
    cout<<"Enter the size:";
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element to be searched:";
    cin>>x;

    bool found = lin_search(arr, n, x);

    if (found)
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element is not present"<<endl;
    }
}