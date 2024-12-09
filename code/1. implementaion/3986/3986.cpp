#include<bits/stdc++.h>
using namespace std;
int n, ret;
string s;
int main(){
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        stack<char> stk;
        for(char it : s){
        	if(stk.size() && stk.top() == it) stk.pop();
        	else stk.push(it);
		}
		if(stk.size() == 0) ret++;
    }
    
    cout << ret << "\n";
    
	return 0;
}
