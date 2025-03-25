// Find the float part of square root number using binary search
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

double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for(int i = 0;i<precision;i++)
    {
        factor = factor/10;
        for(double j = ans; j*j<n; j=j+factor)
        {
            ans = j;
        }   
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int tempsol = square_root(n);
    cout<<"Answer is: "<<morePrecision(n, 3, tempsol)<<endl;
}