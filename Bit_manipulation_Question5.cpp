//Write the program to find the two  unique numbers in an array where every element appears twice except one.

#include "bits/stdc++.h"
using namespace std;

int getbit( int n,int pos)
{
    return((n &(1<<pos))!=0);
}
int unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }
    
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;

    while(setbit!=1)
    {
    setbit=xorsum&1;
    pos++;
    xorsum=xorsum>>1;
    }

    int newxor=0;
    for(int i=0;i<n;i++)
    {
        if(getbit(arr[i],pos-1))
        {
            newxor=newxor^arr[i];
        
        }
        
    }
    
    int unique_2=tempxor^newxor;
        cout<<"1 : "<<newxor<<endl;
        cout<<" 2 : "<<unique_2<<endl;

}
int main()
{
    int arr[]={1,2,3,4,5,3,2,1};
    unique(arr,8);
}