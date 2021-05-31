#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    if (k <= 0)
        cout<<n;
    else
        cout<<(n & ~(1 << (k - 1)));
    return 0;
}
