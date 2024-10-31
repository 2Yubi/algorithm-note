#include<bits/stdc++.h>
using namespace std;
int a[9], n = 9, r = 7;
vector<int> v;

void print(vector<int> v){
    int sum = 0;
    for(int it : v){
        sum += it;
    }
    if(sum == 100){
        for(int it : v) cout << it << "\n";
        exit(0);
    }
}

void combi(int start, vector<int> v){
    if(v.size() == r){
        print(v);
        return;
    }
    for(int i = start+1; i < n; i++){
        v.push_back(i);
        combi(i, v);
        v.pop_back();
    }
    return;
}

int main(){
    for(int i = 0; i < 9; i++){
        cin >> a[i];
    }
    combi(-1, v);

    return 0;
}


// recursive
// vector<int> v;
// void solve(){
//     int sum = 0;
//     for(int i = 0; i < r; i++){
//         sum += a[i];
//     }
//     if(sum == 100){
//         for(int i = 0; i < r; i++){
//             v.push_back(a[i]);
//         }
//         sort(v.begin(), v.end());
//         for(int it : v) cout << it << "\n";
//         exit(0);
//     }
// }

// void makePermutaion(int n, int r, int depth){
//     if(depth == r){
//         solve();
//         return;
//     }

//     for(int i = 0; i < n; i++){
//         swap(a[i], a[depth]);
//         makePermutaion(n, r, depth+1);
//         swap(a[i], a[depth]);
//     }
// }

// int main(){
//     for(int i = 0; i < 9; i++){
//         cin >> a[i];
//     }
//     makePermutaion(n, r, 0);

//     return 0;
// }