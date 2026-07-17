#include<bits/stdc++.h>
using namespace std;

int n,m;
const int INF = 1e7;
vector<vector<int>>g;
vector<int> vis,comp,dist,parent;

void bfs(int node,int cc) {
	queue<int> q;
	q.push(node);
	vis[node] = 1;
	dist[node] = 0;
	parent[node] = 0;
	while(!q.empty()) {
		int curr = q.front();
		q.pop();
		comp[curr] = cc;

		for(auto v:g[curr]) {
			if(!vis[v]) {
				vis[v] = 1;
				q.push(v);
				dist[v] = dist[curr] + 1;
				parent[v] = curr;
			}
		}
	}
}

int main()
{
	cin>>n>>m;
	g.resize(n+1);
	vis.assign(n+1,0);
	comp.assign(n+1,0);
	dist.assign(n+1,INF);
	parent.assign(n+1,-1);

	for(int i = 0; i<m; i++) {
		int x,y;
		cin>>x>>y;

		g[x].push_back(y);
		g[y].push_back(x);
	}

	bfs(1,1);
	vector<int> route;
	if(comp[1] == comp[n]) {
		cout<<dist[n]+1<<endl;
		int cur = n;

		while(cur != 0) {
			route.push_back(cur);
			cur = parent[cur];
		}

		reverse(route.begin(), route.end());
		for(int i = 0; i<(int)route.size(); i++) {
			cout<<route[i]<<" ";
		}
	}
	else cout<<"IMPOSSIBLE";


	return 0;
}



