#include <bits/stdc++.h>
using namespace std;
int arrunion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";

        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";

        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }


    while (i < m)
        cout << arr1[i++] << " ";
    while (j < n)
        cout << arr2[j++] << " ";
cout<<endl;
}
int arrintersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }

    }
    cout<<endl;
}

int main()
{
    int t,n,m,i,j;
    cout<<"how many times program should run\n";
    cin>>t;
    while(t--){
    cout<<"enter array 1 and array 2 size\n";
    cin>>m>>n;
    int arr1[m];
    int arr2[n];
    cout<<"enter array1\n";
    for(i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"enter array2\n";
    for(i=0;i<n;i++){
        cin>>arr2[i];
    }
    cout<<"union is\n";
    arrunion(arr1,arr2,m,n);

    cout<<"intersection is\n";
    arrintersection(arr1,arr2,m,n);
    }
    return 0;

}
