#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter array size\n";
    cin>>n;
    int arr[n];
    cout<<"enter array\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++){
        int curr = arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
