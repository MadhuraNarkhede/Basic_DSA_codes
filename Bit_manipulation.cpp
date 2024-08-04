#include <iostream>
using namespace std;

int getbit(int n,int pos)
{
    int mask=1<<pos;
    int bit=(n&mask)>0?1:0;
    return bit;

}

int clearbit(int n,int pos){
    int mask=~(1<<pos);
    int ans=n&mask;
    return ans;
}

int setbit(int n,int pos){
    int mask=1<<pos;
    int ans=n|mask;
    return ans;
}

int updatebit(int n,int pos,int value){
    int mask=~(1<<pos);
    int ans=(n&mask)|(value<<pos);
    return ans;

}

int main(){
    cout<<getbit(5,2)<<endl;
    cout<<clearbit(5,1)<<endl;
    cout<<setbit(5,1)<<endl;
    cout<<updatebit(5,1,1)<<endl;

    return 0;
}