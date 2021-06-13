#include<iostream>
using namespace std;
bool pythatriplet(int a, int b, int c)
{
    int maxi;
    maxi = max(a, max(b,c));
    int y ,z;
    if(maxi == a){
        y = b;
        z = c;
    }
    else if(maxi == b)
    {
        y = a;
        z = c;
    }
    else{
        y = a;
        z = b;
    }
    if(maxi*maxi == b*b + c*c){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(pythatriplet(a,b,c)){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
