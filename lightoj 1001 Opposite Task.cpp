#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int p;
        cin>>p;
        if(p>10)
        {
            cout<<p-10<<" "<<10<<endl;
        }
        else
        {
            cout<<0<<" "<<p<<endl;
        }
    }
    return 0;
}
