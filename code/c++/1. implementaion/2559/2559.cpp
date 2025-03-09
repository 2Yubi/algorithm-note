#include<bits/stdc++.h>
using namespace std;
int n, k, a, mx = -10000004;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    for(int i = 0; i < n - k; i++){
        int sum = 0;
        for(int j = 0; j < k; j++){
            sum += v[i + j];
            if(sum > mx) mx = sum;
        }
    }

    cout << mx << "\n";

    return 0;
}

