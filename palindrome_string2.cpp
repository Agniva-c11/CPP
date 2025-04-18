#include<iostream>
using namespace std;

char toLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }

}

void check_palindrome(char ch[], int n)
{
    int s = 0;
    int e = n-1;
    while(s<e)
    {
        if(toLowercase(ch[s]) != toLowercase(ch[e]))
        {
            cout<<"Not palindrome"<<endl;
            return;
        }
        else
        {
            s++;
            e--;
        }
    }
    cout<<"Palindrome"<<endl;
}
int getLength(char ch[])
{
    int count = 0;
    for(int i = 0;ch[i]!= '\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[20];

    cout<<"Enter word:";
    cin>>ch;

    int n = getLength(ch);

    check_palindrome(ch, n);

}