#include<bits/stdc++.h>
using namespace std;
int n, m, k, j, l, r, temp, ret = 0;
int a[10];
int main(){
    cin >> n >> m;
    cin >> j;
    l = 1;
    for(int i = 0; i < j; i++){
        cin >> k;
        r = l + m - 1;
        
        if(k > r){
            ret += (k - r);
            l += (k - r);
        }else if(k < l){
            ret += (l - k);
            l -= (l - k);
        }
    }

    cout << ret << "\n";

    return 0;
}