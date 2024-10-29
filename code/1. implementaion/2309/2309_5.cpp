#include<bits/stdc++.h>
using namespace std;
int a[9], n = 9;
vector<int> v;

int main(){
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    do{
        int sum = 0;
        for(int i = 0; i < 7; i++){
            sum += a[i];
        }
        if(sum == 100) break;
    }while(next_permutation(a, a + 9));   

    for(int i = 0; i < 7; i++){
        v.push_back(a[i]);
    }

    sort(v.begin(), v.end());

    for(int it : v) cout << it << "\n";

    return 0;
}