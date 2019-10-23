#include<bits/stdc++.h>
#define ll long long
#define dou double
#define big 0
#define pi 2*acos(0.0)
using namespace std;

ll arr1[25],arr2[25],arr3[25];
ll dp[1009][25];
ll x,m1=0,m2=0;
ll ans(ll pos, ll rev){
    if(pos>x-1){
            return 0;
    }
    if(dp[pos][rev]!=0) return dp[pos][rev];
    ll m1=0,m2=0;
    if(rev==1){
        m1=m1+arr1[pos]+ans(pos+1,2);
        m2=m2+arr1[pos]+ans(pos+1,3);
    }
    else if(rev==2){
        m1=m1+arr2[pos]+ans(pos+1,1);
        m2=m2+arr2[pos]+ans(pos+1,3);
    }
    else{
        m1=m1+arr3[pos]+ans(pos+1,1);
        m2=m2+arr3[pos]+ans(pos+1,2);
    }
    return dp[pos][rev]=min(m1,m2);
}




int main()
{
    ll t;
    cin>>t;
    ll cas=0;
    while(t--){
        cin>>x;
        for(int i=0;i<x;i++){
            cin>>arr1[i]>>arr2[i]>>arr3[i];
        }
        ll s1=ans(0,1);
        m1=0;
        memset(dp,0,sizeof(dp));
        ll s2=ans(0,2);
        memset(dp,0,sizeof(dp));
        m1=0;
        ll s3=ans(0,3);
        memset(dp,0,sizeof(dp));
        //cout<<s1<<" "<<s2<<" "<<s3<<endl;
        cout<<"Case "<<++cas<<": "<<min(s1,min(s2,s3))<<endl;
        memset(dp,0,sizeof(dp));
        m1=0;
    }
}
