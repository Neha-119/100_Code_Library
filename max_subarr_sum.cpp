//brute force
//so complexity will be O(n^3)
//which is very bad
//so we will use cumulative sum approach.
/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    int maxi = INT_MIN;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){

                int sum=0;
            for(k=i;k<=j;k++){
                sum += a[k];
            }
            maxi = max(maxi,sum);
        }
    }
    cout<<maxi<<endl;
return 0;
}
//method 2
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int cursum[n+1];
    cursum[0] = 0;
    for(i=1;i<=n;i++){
        cursum[i] = cursum[i-1] + a[i-1];
    }
    int maxsum = INT_MIN;
    for(i=1;i<=n;i++){
        int sum = 0;
        for(j=0;j<i;j++){
            sum = cursum[i] - cursum[j];
            maxsum = max(sum,maxsum);
        }
    }
    cout<<maxsum<<endl;
    return 0;
} */
//for O(n) we will use kadanes algo
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    int cursum = 0;
    int maxsum = INT_MIN;
    for(i=0;i<n;i++){
        cursum += a[i];
        if(cursum<0){
            cursum=0;
        }
        maxsum = max(maxsum,cursum);
    }
cout<<maxsum<<endl;
return 0;
}
