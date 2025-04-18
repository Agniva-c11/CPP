#include<iostream>
using namespace std;
void reverse_string(char name[], int n)
{

    int start = 0;
    int end = n-1;
    while(start<end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
    cout<<"Reversed string is:"<<name<<endl;
}
int getLength(char name[])
{
    int count = 0;
    for(int i = 0;name[i]!='\0';i++)
    {
        count++;    
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter name:";
    cin>>name;

    cout<<"Name is:"<<name<<endl;

    int n = getLength(name);
    reverse_string(name, n);

}