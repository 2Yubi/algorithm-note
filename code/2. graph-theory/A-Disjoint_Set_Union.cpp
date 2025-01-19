#include<bits/stdc++.h>
using namespace std;
const int max_n = 204;
vector<int> a[max_n];
int n, q;
int t, u, v, cnt;
int flag;
int visited[max_n];

void BFS(int u, int v){
	visited[u] = true;
	queue<int> q; 
	flag = 0;
	q.push(u);
	while(q.size()){
		int here = q.front(); q.pop();
		for(int it : a[here]){
			if(it == v){
				cout << 1 << "\n"; 
				flag++; break;
			}else{
				if(visited[it]) continue;
				q.push(it);
			}
		}
	}
	if(flag == 0) cout << 0 << "\n";
}

int main(){
	cin >> n >> q;
	while(q--){
		cin >> t >> u >> v;
		if(t){
			// dfs
			BFS(u, v); cnt++;
			fill(visited, visited + max_n, 0);
		}else{
			a[u].push_back(v);
			a[v].push_back(u);
		}
	}

	return 0;
}