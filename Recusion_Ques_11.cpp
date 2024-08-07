//Write the code to move all "x" at the end of the string using recursion.

#include <iostream>
using namespace std;

string moveallx(string s)
{
  if(s.length()==0)
  {
    return "";
  }

  char ch=s[0];
  string ans=moveallx(s.substr(1));

  if(ch=='x')
  {
    return ans+ch;
  }

  return ch+ans;
}  

int main()
{
cout<<moveallx("abxcdx");
}
