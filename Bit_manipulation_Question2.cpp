//Write a program to check number of ones in a binary form of number.
#include<iostream>
using namespace std;
int main()
{   int n;
   cin>>n;
   int count=0;
   while(n>0)
   {
       if(n&1)
       {
           count++;
       }
       n=n>>1;
   }
   cout<<count<<endl;
   return 0;
}