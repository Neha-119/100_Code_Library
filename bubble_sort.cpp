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
    int cnt = 1;
    while(cnt<n){
        for(i=0;i<n-cnt;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        cnt++;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
