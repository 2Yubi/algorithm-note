#include<bits/stdc++.h>
using namespace std;
int n;
char a[65][65];
string s;



int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < n; j++){
            a[i][j] = s[j];
        }
    }

    return 0;
}