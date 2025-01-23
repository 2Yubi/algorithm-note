#include<bits/stdc++.h>
using namespace std;
int n, m, j, a, ret;

int main(){
	cin >> n >> m;
	cin >> j;
	
	int pos = 0;
	int start = 1;
	
	for(int i = 0; i < j; i++){
		cin >> a;
		if(start <= a && m >= a) continue;

		if(m < a){
			pos = a - m;
			start += pos;
			m += pos;
			ret += pos;
		}else{
			pos = start - a;
			start -= pos;
			m -= pos;
			ret += pos;
		}
	}
	
	cout << ret << "\n";
	
	return 0;
}