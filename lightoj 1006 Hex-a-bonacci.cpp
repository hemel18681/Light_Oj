#include<bits/stdc++.h>
#define mod 10000007
using namespace std;
long long ans[100007];
int a, b, c, d, e, f;
long long fn( long long n ) {
//    if( n == 0 ) return a;
//    if( n == 1 ) return b;
//    if( n == 2 ) return c;
//    if( n == 3 ) return d;
//    if( n == 4 ) return e;
//    if( n == 5 ) return f;
    if(ans[n]!=-1) return ans[n];
    ans[n]=(fn(n-1)%mod)+ (fn(n-2)%mod) + (fn(n-3)%mod) + (fn(n-4)%mod) + (fn(n-5)%mod) + (fn(n-6)%mod);
    return ans[n];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        memset(ans,-1,100007);
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        ans[0]=a;
        ans[1]=b;
        ans[2]=c;
        ans[3]=d;
        ans[4]=e;
        ans[5]=f;
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
