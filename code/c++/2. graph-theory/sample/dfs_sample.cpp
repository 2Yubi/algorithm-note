// you can use includes, for example:
// #include <algorithm>
#include<bits/stdc++.h>
using namespace std;
bool visited[700][700];
const int dy[4] = {-1, 0, 1, 0}, dx[4] = {0, 1, 0, -1};
int ret;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
void dfs(int y, int x){
    visited[y][x] = true;
    for(int i = 0; i < 4; i++){
        int ny = dy[i] + y;
        int nx = dx[i] + x;

        if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;

        if(A[ny][nx] && !visited[ny][nx]){
            dfs(ny, nx);
        }
    }
    return;
}

int solution(vector< vector<bool> > &A) {
    // Implement your solution here
    fill(&visited[0][0], &visited[0][0] + 700 * 700, 0); 

    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < A[i].size(); j++){
            if(A[i][j] && !visited[i][j]){
                dfs(i, j);
                ret++;
            }
        }
    }
}
