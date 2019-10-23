#include<bits/stdc++.h>
#define ll long long
#define dou double
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    ll cas=0;
    while(t--){
        ll x;
        cin>>x;
        ll sum=0,n;
        while(x--){
            cin>>n;
            if(n>0) sum+=n;
        }
        cout<<"Case "<<++cas<<": "<<sum<<endl;
    }
}
