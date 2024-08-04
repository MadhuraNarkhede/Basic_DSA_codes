//Write a program to check if a given number is power of 2.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if((n & (n-1))==0)
    {
        cout<<"Yes, it is a power of 2"<<endl;
    }
    else
    {
        cout<<"No, it is not a power of 2"<<endl;
    }
}