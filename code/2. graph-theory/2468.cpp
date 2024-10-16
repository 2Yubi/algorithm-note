#include<bits/stdc++.h>
using namespace std;
int a[101][101];
bool visited[101][101];
int n, ret;
int max_ret = 0;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int cnt = 100;

void dfs(int y, int x){
    visited[y][x] = 1;

    for(int i = 0; i < 4; i++){
        int ny = dy[i] + y;
        int nx = dx[i] + x;

        if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;

        if(a[ny][nx] && !visited[ny][nx]){
            dfs(ny, nx);
        }
    }
    return;
}

int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    while(cnt > 0){
        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
        ret = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] && !visited[i][j]){
                    dfs(i, j); ret++;
                }
            }
        }
        if(max_ret < ret) max_ret = ret;

        int flag = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][j]--;
                if(a[i][j] < 0) a[i][j] = 0;
                if(a[i][j] > 0) flag++;
            }
        }
        if(flag == 0) break;

        cnt--;
    }

    cout << max_ret << "\n";

    return 0;
}