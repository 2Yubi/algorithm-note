#include<bits/stdc++.h>
using namespace std;
#define y1 aaaa
int n, m, k, x1, y1, x2, y2;
int a[104][104];
bool visited[104][104];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
vector<int> ret;

int dfs(int y, int x){
    visited[y][x] = 1;
    int ret = 1;

    for(int i = 0; i < 4; i++){
        int ny = dy[i] + y;
        int nx = dx[i] + x;
        if(ny < 0 || nx < 0 || ny >= m || nx >= n || visited[ny][nx]) continue;
        if(!a[ny][nx]){
            ret += dfs(ny, nx);
        }
    }
    return ret;
}

int main(){
    cin >> m >> n >> k;
    for(int i = 0; i < k; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int x = x1; x < x2; x++){
            for(int y = y1; y < y2; y++){
                a[y][x] = 1;
            }
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(!a[i][j] && !visited[i][j]){
                ret.push_back(dfs(i, j));
            }
        }
    }
    
    sort(ret.begin(), ret.end());
    cout << ret.size() << "\n";
    for(int v : ret) cout << v << " ";
    return 0;
}