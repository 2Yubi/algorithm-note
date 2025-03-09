#include<bits/stdc++.h>
using namespace std;
int n, k;
string a, b;
int main(){
    cin >> n;

    while(n--){
        map<string, int> mp;
        cin >> k;
        for(int i = 0; i < k; i++){
            cin >> a >> b;
            mp[b]++;
        }

        long long ret = 1;
        for(auto it : mp){
            ret *= (long long)it.second + 1;
        }
        ret--;
        cout << ret << "\n";
    }
    return 0;
}