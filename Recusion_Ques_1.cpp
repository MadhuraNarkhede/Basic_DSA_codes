//Write the code to find the sum till number n with the help of recurrsion.

#include <iostream> 
using namespace std;

int sum(int n)
{
   if(n==0)
   {
      return 0;
   }

   int prevsum=sum(n-1);
   return prevsum+n;
}

int main()
{
   int n;
   cin>>n;

   cout<<sum(n)<<endl;
}

