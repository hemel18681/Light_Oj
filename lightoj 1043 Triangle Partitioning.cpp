#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int cas=0;
    while(t--){
        double a,b,c,r;
        cin>>a>>b>>c>>r;
        r=r/(r+1);
        cout<<fixed<<setprecision(9)<<"Case "<<++cas<<": "<<a*sqrt(r)<<endl;
    }
}
