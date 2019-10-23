#include <bits/stdc++.h>
using namespace std;

vector<int>adj[10007];
int vis[1005],mark[1005];


int bfs(int s){
    queue<int>Q;
    Q.push(s);
    mark[s]++;
    vis[s]=1;
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();

        for(int i=0; i<adj[u].size(); i++){
            if(vis[adj[u][i]]==0){
                vis[adj[u][i]] = 1;
                mark[adj[u][i]]++;
                Q.push(adj[u][i]);
            }
        }
    }
   // cout<<endl;
}
int main()
{
    int t,cas=0;
    cin>>t;
    while(t--){
        for(int i=0;i<10007;i++){
            adj[i].clear();
        }
        memset(mark,0,sizeof(mark));
        int k,n,m;
        cin>>k>>n>>m;
        int a[k];
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            int p,q;
            cin>>p>>q;
            adj[p].push_back(q);
        }
        for(int i=0;i<k;i++){
            memset(vis,0,sizeof(vis));
            bfs(a[i]);
        }
//        for(int i=0;i<10;i++){ cout<<mark[i]<<" ";}
//        cout<<endl;
////        cout<<k<<endl;
        int cnt=0;
        for(int i=0;i<=n;i++){
            if(mark[i]==k) {cnt++;}
        }
        cout<<"Case "<<++cas<<": "<<cnt<<endl;
    }
}
