#include<iostream>
using namespace std;

bool check_palindrome(char word[], int n)
{
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        if (word[s]!=word[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char word[])
{
    int count = 0;
    for(int i = 0;word[i]!='\0';i++)
    {
        count++;    
    }
    return count;
}
int main()
{
    char word[20];
    cout<<"Enter word:";
    cin>>word;

    int n = getLength(word);

    cout<<"Palindrome or not:"<<check_palindrome(word, n)<<endl; 
}