#include<bits/stdc++.h>
using namespace std;
vector<vector<bool>> A;
bool visited[704][704];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

// void dfs(int y, int x){
//     visited[y][x] = 1;

//     for(int i = 0; i < 4; i++){
//         int ny = dy[i] + y;
//         int nx = dx[i] + x;

//         if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;

//         if(a[ny][nx] && !visited[ny][nx]){
//             dfs(ny, nx);
//         }
//     }
//     return;
// }

int solution(vector<vector<bool>> &A) {
    // Implement your solution here
    cout << "hello" << " ";
    cout << A.size();
    
    // for(int d = 1; d < 704; d++){
    //     fill(&visited[0][0], &visited[0][0] + 704 * 704, false);
    //     int cnt = 0;
    //     for(int i = 0; i < n; i++){
    //         for(int j = 0; j < n; j++){
    //             if(a[i][j] > d && !visited[i][j]) {
    //                 dfs(i, j, d);
    //                 cnt++;
    //             }
    //         }
    //     }
    //     ret = max(ret, cnt);
    // }
	return 0;
}


int main(){
	A[0][0] = false; A[0][1] = true; A[0][2] = false; A[0][3] = true;
	A[1][0] = true; A[1][1] = true; A[1][2] = true; A[1][3] = false;
	A[2][0] = true; A[2][1] = true; A[2][2] = true; A[2][3] = true;
	A[3][0] = false; A[3][1] = true; A[3][2] = true; A[3][3] = true;
	
	cout << "hi" << "\n";
	solution(A);
	
	return 0;
}
