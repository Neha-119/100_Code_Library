#include<iostream>
using namespace std;
int main()
{
    int a, b, i, j;
    cout<<"Enter no of rows and column\n";
    cin>>a>>b;
    for(i = 0; i < a; i++){
        for(j = 0; j < b; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
