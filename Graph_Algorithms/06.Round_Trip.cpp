#include<bits/stdc++.h>
using namespace std;

bool flag = false;
int n,m;
vector<vector<int>> g;
vector<int> vis,parent;
vector<int>path;
void dfs(int node, int par){
    vis[node] = 1;

    for(auto v : g[node]){

        if(v == par) continue;

        if(!vis[v]){
            parent[v] = node;
            dfs(v,node);

            if(flag) return;
        }
        else{
            flag = true;

            path.push_back(v);

            int cur = node;

            while(cur != v){
                path.push_back(cur);
                cur = parent[cur];
            }

            path.push_back(v);
            reverse(path.begin(),path.end());

            return;
        }
    }
}

int main()
{
	cin>>n>>m;
	g.resize(n+1);
	vis.assign(n+1,0);
	parent.assign(n+1,0);
// 	color.assign(n+1,1);

	for(int i = 1; i<=m; i++) {
		int x,y;
		cin>>x>>y;

		g[x].push_back(y);
		g[y].push_back(x);
	}

	for(int i = 1; i<=n; i++) {
		if(!vis[i] && !flag) {
			dfs(i,0);
		}
	}

	if(flag) {
		cout<<path.size()<<endl;
		for(int i = 0; i<path.size(); i++) {
			cout<<path[i]<<" ";
		}
	} else {
		cout<<"IMPOSSIBLE";
	}


	return 0;
}





