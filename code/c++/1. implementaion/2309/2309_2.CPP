#include<bits/stdc++.h>
using namespace std;
int a[9], n = 9, r = 7;
vector<int> v;

void solve(){
    int sum = 0;
    for(int i = 0; i < r; i++){
        sum += a[i];
    }   
    if(sum == 100){
        for(int i = 0; i < r; i++) v.push_back(a[i]);
        sort(v.begin(), v.end());
        for(int it : v) cout << it << "\n";
        exit(0);
    }
}

void makePermutaion(int n, int r, int depth){
    if(depth == r){
        solve();
        return;
    }
    for(int i = depth; i < n; i++){
        swap(a[i], a[depth]);
        makePermutaion(n, r, depth+1);
        swap(a[i], a[depth]);
    }
    return;
}

int main(){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    makePermutaion(n, r, 0);

    return 0;
}