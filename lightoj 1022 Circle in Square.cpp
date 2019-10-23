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
        dou r;
        cin>>r;
        dou x = 2*r;
        x=x*x;
        dou area = pi*r*r;
        cout<<fixed<<setprecision(2)<<"Case "<<++cas<<": "<<x-area<<endl;
    }
}
