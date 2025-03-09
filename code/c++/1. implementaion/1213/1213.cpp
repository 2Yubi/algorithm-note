#include<bits/stdc++.h>
using namespace std;
string s, ret;
char mid;
int cnt[100], flag = 0;
int main(){
    cin >> s;
    for(int i : s) cnt[i]++;

    for(int i = 'Z'; i >= 'A'; i--){
        if(cnt[i] %2 != 0){
            mid = i; flag++; cnt[i]--;
        }
        if(flag > 1) break;

        for(int j = 0; j < cnt[i]; j += 2){
            ret = char(i) + ret;
            ret += char(i);
        }
    }

    if(flag <= 1){
        if(mid) ret.insert(ret.begin() + ret.size()/2, mid);
        cout << ret << "\n";
    } 
    else cout << "I'm Sorry Hansoo" << "\n";

    return 0;
}