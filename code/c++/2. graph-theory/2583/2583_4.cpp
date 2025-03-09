#include<bits/stdc++.h>
using namespace std;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
const int max_n = 101;
int m, n, k, cnt, ny, nx, ret;
int px1, py1, px2, py2;
int a[max_n][max_n], visited[max_n][max_n];
vector<int> ret_cnt;

void dfs(int y, int x){
	visited[y][x] = 1;
	cnt++;
	for(int i = 0; i < 4; i++){
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if(visited[ny][nx]) continue;
		if(a[ny][nx] == 0){
			dfs(ny, nx);
		}
	}
}

int main(){
	cin >> m >> n >> k;
	while(k--){
		cin >> px1 >> py1 >> px2 >> py2;
		for(int i = px1; i < px2; i++){
			for(int j = py1; j < py2; j++){
				a[i][j] = 1;
			}
		}	
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == 0 && visited[i][j] == 0){
				dfs(i, j); ret++;
				ret_cnt.push_back(cnt);
				cnt = 0;
			}
		}
	}
	
	sort(ret_cnt.begin(), ret_cnt.end());
	cout << ret << "\n";
	for(int it : ret_cnt) cout << it << " ";
	
	return 0;
}