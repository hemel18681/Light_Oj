#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x,p=0,c=0;
        cin>>x;
        int mark[105];
        memset(mark,0,sizeof(mark));
        int num=x;
        for(int j=x;j>1;j--)
        {
            c=0;
            int m=j;
            if(m%2==0) p++;
            while(m%2==0){
                m=m/2;
                c++;
            }
            mark[2]+=c;
            for(int k=3;k<=sqrt(m);k++){
                    c=0;
                if(m%k==0){
                        p++;
                while(m%k==0){
                    m=m/k;
                    c++;
                }
                }
                mark[k]+=c;
            }
            if(m>1) {mark[m]+=1; p++;}
            //cout<<mark[3]<<" "<<j<<endl;
        }
       // cout<<p<<endl;
       cout<<"Case "<<i<<": "<<num<<" =";
       cout<<" "<<2<<" "<<"("<<mark[2]<<")";
        for(int m=3;m<105;m++){
                //cout<<m<<" "<<mark[m]<<endl;
            if(mark[m]!=0){
                cout<<" *"<<" "<<m<<" "<<"("<<mark[m]<<")";
            }
        }
        cout<<endl;
    }
}
