#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter array\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int ans = 2;
    while(j<n){
        if(pd == arr[j] - arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            curr =2;
        }
        ans = max(ans,curr);
        j++;
    }

        cout<<ans<<endl;
}
