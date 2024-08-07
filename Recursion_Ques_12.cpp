//Write the code to find all possible substring of a string.

#include <iostream>
using namespace std;

void substringseq(string s , string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    
    }
    char ch=s[0];
    string ros=s.substr(1);

    substringseq(ros,ans);
    substringseq(ros,ans+ch);
        
    
}

int main()
{
 substringseq("ABC","");
 cout<<endl;

 return 0;
}