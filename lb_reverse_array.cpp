#include<iostream>
using namespace std;
void reversearray(int arr[],int start,int end)
{
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printarray(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
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
    reversearray(arr,0,n-1);
    cout<<"reversed array\n";
    printarray(arr,n);
    return 0;
}
