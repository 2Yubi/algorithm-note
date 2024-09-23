#include<bits/stdc++.h>
using namespace std;
int n, m;
int sy, sx, ey, ex;
int adj[104][104], visited[104][104];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
queue<pair<int, int>> q;

void bfs(int y, int x){
    visited[y][x] = 1;
    q.push({y, x});

    while(q.size()){
        tie(y, x) = q.front(); q.pop();

        for(int i = 0; i < 4; i++){
            int ny = dy[i] + y;
            int nx = dx[i] + x;

            if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;

            if(adj[ny][nx] && !visited[ny][nx]){
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }
}

int main(){
    cin >> n >> m;
    cin >> sy >> sx;
    cin >> ey >> ex;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> adj[i][j];
        }
    }

    bfs(sy, sx);

    cout << visited[ey][ex] << "\n"; 

    // debug
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << visited[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    return 0;
}