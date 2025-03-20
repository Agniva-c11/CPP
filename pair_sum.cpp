// Pair Sum = Task is to find the pair of elemens in an array whose sum is equal to a given number S.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pairSum(int arr[], int n, int s)
{
    vector< vector<int> > ans;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
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

    int s;
    cout<<"Enter s:";
    cin>>s;

    vector< vector<int> > result = pairSum(arr, n, s);

    cout<<"Final Output:";
    for(int i = 0;i<result.size();i++)
    {
        for(int j = 0;j<result[i].size();j++)
        {
            cout<<result[i][j]<<" ";
        }
    }
    return 0;
}