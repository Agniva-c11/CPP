// Given a non-negative integer x. Compute and return the square root of x.
#include<iostream>
using namespace std;

int square_root(int n)
{
    int s = 0;
    int e = n;
    long long int ans = -1;
    while(s<=e)
    {
        long long int mid = s + (e-s)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        else if(mid*mid<n)
        {
            ans =mid;
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    cout<<"The square root of the number"<< n << "is :"<<square_root(n)<<endl;
}