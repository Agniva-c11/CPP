#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> intersection(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j =0;
    vector<int> ans;

    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    int m;
    cout<<"Enter m:";
    cin>>m;

    int arr1[n];

    cout<<"Enter arr1 elements:";
    for(int i = 0;i<n;i++)
    {
        cin>>arr1[i];
    }

    int arr2[m];

    cout<<"Enter arr2 elements:";
    for(int i = 0;i<m;i++)
    {
        cin>>arr2[i];
    }

    vector<int> result = intersection(arr1, arr2, n,m);

    cout<<"Final Output:";
    for(int i = 0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}