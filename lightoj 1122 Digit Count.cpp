#include<bits/stdc++.h>
using namespace std;

int dp[15][15];
int m;
int n;
int arr[50];

int solve(int pos, int num){
    if(pos==n) return 1;
    if(dp[pos][num]!=-1) return dp[pos][num];
    int cnt=0;
    for(int i=0;i<m;i++){
        if(num==0 or (abs(arr[i]-num)<=2)){
            cnt = cnt + solve(pos+1,arr[i]);
        }
    }
    dp[pos][num]=cnt;
    return cnt;
}

int main()
{
    int t;
    cin>>t;
    for(int ca=1;ca<=t;ca++){
        for(int i=0;i<15;i++){
            for(int j=0;j<15;j++){
                dp[i][j]=-1;
            }
        }
        cin>>m>>n;
        for(int i=0;i<m;i++) cin>>arr[i];
        cout<<"Case "<<ca<<": "<<solve(0,0)<<endl;
    }
}
