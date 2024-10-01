#include<bits/stdc++.h>
using namespace std;
int n, m, j, l, r, temp, ret;
int main(){
    cin >> n >> m >> j;
    l = 1;
    while(j--){
        r = l + m - 1;
        cin >> temp;
        if(temp >= l && temp <= r) continue;
        else{
            if(temp > r){
                l += (temp - r);
                ret += (temp - r);  
            }else{
                ret += (l - temp);
                l -= temp;
            }
        }
    }

    cout << ret << "\n";
    return 0;
}