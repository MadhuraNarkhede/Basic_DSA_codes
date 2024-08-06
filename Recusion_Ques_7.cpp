//Write the code to find the fist occurence and last occurence of an element in an array using recursion.

#include <iostream> 
using namespace std;

int firstOcc(int arr[], int n, int i, int key)
{
  if(arr[i]==n)
  {
    return -1;
  }

  if(arr[i]==key)
  {
    return i;
  }

  return firstOcc(arr,n,i+1,key);
}

int lastocc(int arr[] , int n, int i,int key)
{
  if(arr[i]==n)
  {
    return -1;
  }

  int restarray=lastocc(arr,n,i+1,key);

  if(restarray!=-1)
  {
    return restarray;
  }

  if(arr[i]==key)
  {
    return i;
  }
}

int main()
{
  int arr[]={4,2,1,2,5,2,7};
  int key=2;
  cout<<firstOcc(arr,  7, 0,key)<<" ";
  cout<<lastocc(arr,  7, 0,key)<<" ";
}

