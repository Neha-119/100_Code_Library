#include<iostream>
using namespace std;
void rearrange(int a[],int n)
{
    int i,j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0){
            if(i!=j)
                swap(a[i],a[j]);
            j++;
        }
    }
}
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int n,i;
    cout<<"enter size of array\n";
    cin>>n;
    int a[n];
    cout<<"enter array\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    rearrange(a,n);
    printarray(a,n);
    return 0;
}
