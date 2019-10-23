    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        ll t;
        cin>>t;
        ll cas=0;
        while(t--){
            ll a,b;
            cin>>a>>b;
            ll p=(b/3)*2;
            if(b%3==2) p++;
            //cout<<p<<endl;
            ll q=((a-1)/3)*2;
            if((a-1)%3==2) q++;
            //cout<<q<<endl;
            cout<<"Case "<<++cas<<": "<<p-q<<endl;
        }
    }


