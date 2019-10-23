#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,cas=0;
    cin>>t;
    while(t--){
        int p,q;
        cin>>p>>q;
        if(p==2||q==2){
            int n;
            if(p==2) n=q;
            else n=p;
            if(n%4==0) {}
            else if(n%4==3) n=n+1;
            else if(n%4==2) n=n+2;
            else if(n%4==1) n=n+1;
            cout<<"Case "<<++cas<<": "<<n<<endl;
        }
        else if(p==1||q==1) cout<<"Case "<<++cas<<": "<<p*q<<endl;
        else if((p*q)%2==0) cout<<"Case "<<++cas<<": "<<(p*q)/2<<endl;
        else cout<<"Case "<<++cas<<": "<<(p*q)/2 +1<<endl;
    }
}
