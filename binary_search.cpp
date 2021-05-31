#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int i,s=0,e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,i,key;
    cout<<"enter array size\n";
    cin>>n;
    int arr[n];
    cout<<"enter array\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter key\n";
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}
