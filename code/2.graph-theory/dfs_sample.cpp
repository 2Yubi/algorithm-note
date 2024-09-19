#include<bits/stdc++.h>
using namespace std;
int n, m, ret;
int adj[104][104];
bool visited[104][104];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void dfs(int y, int x){
    visited[y][x] = 1;

    for(int i = 0; i < 4; i++){
        int ny = dy[i] + y;
        int nx = dx[i] + x;

        if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;

        if(adj[ny][nx] && !visited[ny][nx]){
            dfs(ny, nx);
        }
    }
    return;
}

int main(){
    cin >> n >> m;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> adj[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(adj[i][j] && !visited[i][j]){
                dfs(i, j);
                ret++;
            }
        }
    }

    cout << ret << "\n";
    return 0;
}