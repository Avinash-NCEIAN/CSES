#include<bits/stdc++.h>
using namespace std;

bool flag = true;
int n,m;
vector<vector<int>> g;
vector<int> vis,teams,color;

void dfs(int node, int team) {
	vis[node] = 1;
	teams[node] = team;
	color[node] = team;
	for(auto v: g[node]) {
		if(!vis[v]) {
			dfs(v,3-team);
		} else if(color[v] == color[node]) {
			flag = 0;
		}
	}
}

int main()
{
	cin>>n>>m;
	g.resize(n+1);
	vis.assign(n+1,0);
	teams.assign(n+1,0);
	color.assign(n+1,1);

	for(int i = 1; i<=m; i++) {
		int x,y;
		cin>>x>>y;

		g[x].push_back(y);
		g[y].push_back(x);
	}

	int team = 1;
	for(int i = 1; i<=n; i++) {
		if(!vis[i]) {
			dfs(i,team);
		}
	}

	if(flag) {
		for(int i = 1; i<=n; i++) {
			cout<<teams[i]<<" ";
		}
	} else {
		cout<<"IMPOSSIBLE";
	}


	return 0;
}





