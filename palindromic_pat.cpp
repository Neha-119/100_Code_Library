#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin>>n;
    for(i=1;i<=n;i++){ // for rows.
        for(j=1;j<=n-i;j++){ // for spaces.
            cout<<"  ";
        }
    int k=i;
    for(;j<=n;j++){
        cout<<k--<<" "; // for number in decreasing order.
    }
    k=2;
    for(;j<=n+i-1;j++){ //for number in increasing order.
        cout<<k++<<" ";
    }
    cout<<endl;
    }
    return 0;
}
