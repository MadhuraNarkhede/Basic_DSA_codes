//Write a program to generat all possible subset of set.
#include<iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter the size of the set: ";
    cin>>n;
    int set[n];
    cout<<"Enter the elements of the set: ";
    for(int i=0;i<n;i++)
    {
        cin>>set[i];
    }
    int total_subset=1<<n;
    for(int i=0;i<total_subset;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                cout<<set[j]<<" ";
            }
        }
        cout<<endl;
    }
}
