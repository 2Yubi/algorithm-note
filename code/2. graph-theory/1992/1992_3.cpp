#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, mx;
ll c;
ll cnt[1004], a[1004];

int main(){
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        cin >> c;
        cnt[c]++;
    }

    for(int i = 0; i < c; i++){
        for(int j = 0; j < a[i]; j++){
            cout << i << " ";
        }
    }

    return 0;
}