#include<iostream>
using namespace std;
int getbit(int n, int posi)
{
   return ((n & (1<<posi))!=0);
}
int setbit(int n, int posi)
{
   return (n | (1<<posi));
}
int clearbit(int n, int posi)
{
    int mask=~(1<<posi);
   return (n & mask);
}
int updatebit(int n,int posi, int value)
{
    int mask= ~(1<<posi);
    n = n&mask;
    return (n | (value<<posi));
}
int main()
{
    int n,posi,value;
    cin>>n>>posi>>value;
    cout<<getbit(n,posi)<<endl;
    cout<<setbit(n,posi)<<endl;
    cout<<clearbit(n,posi)<<endl;
    cout<<updatebit(n,posi,value)<<endl;
    return 0;
}
