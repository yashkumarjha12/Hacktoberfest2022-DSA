//author : elvenblade
//जय हिंद, जय महाराष्ट्र !

//Graph Bidirectional Implementation

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define vsort sort(v.begin(),v.end())
#define vpb v.push_back
#define asort sort(a,a+n)
#define vv vector<int> v
#define rev reverse(a, a+n) 

signed main(){
    fastio;
    
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1; i<(n+1); i++){
        cout<<i<<" -> ";
        for(int j=0; j<adj[i].size(); j++) cout<<adj[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}


