#include<bits/stdc++.h>
using namespace std;

using state = pair<long long,long long>;
const long long INF = 1e18 + 7;

#define F first
#define S second

long long n,m;
vector<vector<state>> g;
vector<long long> vis,dist;

void shortest_path(int node){
    priority_queue<state> pq;
    pq.push({-0,node});
    dist[node] = 0;
    
    while(!pq.empty()){
        state curr = pq.top();pq.pop();
        if(vis[curr.S])continue;
        vis[curr.S] = 1;
        
        for(auto v : g[curr.S]){
            int neigh = v.F;
            int wt = v.S;
            if(dist[neigh] > dist[curr.S]+wt){
                dist[neigh] = dist[curr.S]+wt;
                pq.push({-dist[neigh],neigh});
            }
        }
    }
    
}

int main()
{
    cin>>n>>m;
    g.resize(n+1);
    dist.assign(n+1,INF);
    vis.assign(n+1,0);
    
    for(int i = 0;i<m;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        
        g[a].push_back({b,c});
    }
    
    shortest_path(1);
    
    for(int i = 1; i<=n; i++) {
		cout<<dist[i]<<" ";
	}
    
    return 0;
}