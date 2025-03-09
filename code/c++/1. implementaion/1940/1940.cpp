#include<bits/stdc++.h>
using namespace std;
int n, m, ret;
int s[15000];
int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    sort(s, s + n);

    for(int i = 0 ; i < n; i++){
        for(int j = i+1; j < n; j++){
            cout << s[i] << " : " << s[j] << "\n";
            if(s[i] + s[j] == m){
                cout << s[i] << " : " << s[j] << "\n";
                ret++;
            }
        }
    }
    cout << ret << "\n";

    return 0;
}

