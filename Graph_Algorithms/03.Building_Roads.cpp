#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>>g;
vector<int> vis,comp;

void bfs(int node,int cc) {
	queue<int> q;
	q.push(node);
	vis[node] = 1;

	while(!q.empty()) {
		int curr = q.front();
		q.pop();
		comp[curr] = cc;
		for(auto v:g[curr]) {
			if(!vis[v]) {
				vis[v] = 1;
				q.push(v);

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

	for(int i = 0; i<m; i++) {
		int x,y;
		cin>>x>>y;

		g[x].push_back(y);
		g[y].push_back(x);
	}

	int cc = 1;
	vector<pair<int,int>> p;
	for(int i = 1; i<=n; i++) {
		if(!vis[i]) {
			bfs(i,cc);
			cc++;
			if(i != 1)p.push_back({i-1,i});
		}

	}

	cout<<cc-2<<endl;

	for(int i = 0; i<(int)p.size(); i++)
	{
	    cout<<p[i].first<<" "<<p[i].second<<endl;;
        //if(comp[i-1] != 0 && comp[i] != 0 && comp[i] != comp[i-1])cout<<i-1<<" "<<i<<endl;   
	}
	cout<<endl;
	return 0;
}



