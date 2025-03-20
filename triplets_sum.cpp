// Triplets with given sum - 
#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> tripletsSum(int arr[], int n, int k)
{
    vector<vector<int>> ans;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            for(int l = j+1;l<n;l++)
            {
                if(arr[i]+arr[j]+arr[l]==k)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[l]);
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    int k;
    cout<<"Enter k:";
    cin>>k;

    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<vector<int>> result = tripletsSum(arr, n, k);

    cout << "Final Output:\n";
    if(result.empty())
    {
        cout << "No triplets found.";
    } 
    else 
    {
        for(auto triplet : result)
        {
            for(auto number : triplet)
            {
                cout << number << " ";
            }
            cout << "\n";
        }
    }



}