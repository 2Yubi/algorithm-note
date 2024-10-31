#include<bits/stdc++.h>
using namespace std;
int a[9], n = 9, r = 7;
vector<int> v;

// << makePermutaion >>
int main(){
    return 0;
}

// << permutaion_recursive >>
// int main(){
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     do{
//         int sum = 0;
//         for(int i = 0; i < r; i++){
//             sum += a[i];
//         }
//         if(sum == 100){
//             for(int i = 0; i < r; i++){
//                 v.push_back(a[i]);
//             }
//             break;
//         }
//     } while(next_permutation(a, a + 9));

//     sort(v.begin(), v.end());
//     for(int it : v) cout << it << "\n";
//     return 0;
// }


// << combination_recursive >>

// void solve(vector<int> v){
//     int sum = 0;
//     for(int it : v) sum += it;
//     if(sum == 100){
//         sort(v.begin(), v.end());
//         for(int it : v) cout << it << "\n";
//         exit(0);
//     }
// }
// void combi(int start, vector<int> v){
//     if(v.size() == r){
//         solve(v);
//         return;
//     }
    
//     for(int i = start+1; i < n; i++){
//         v.push_back(a[i]);
//         combi(i, v);
//         v.pop_back();
//     }
// }
// int main(){
//     for(int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     combi(-1, v);

//     return 0;
// }