//Write the code to find fibonacci of a  nth number.

#include <iostream> 
using namespace std;

int fib(int n)
{
 if (n==1 || n==0)
 {
   return n;
 }


 return fib(n-1)+fib(n-2);
}

int main()
{
   int n;
   cin>>n;

   cout<<fib(n)<<endl;
}

