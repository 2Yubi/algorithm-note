#include<bits/stdc++.h>
using namespace std;
int n, c, a[1004];
map<int, int> mp, mp_first;
vector<pair<int, int>> v;

//bool cmp(pair<int,int> a, pair<int,int> b){
//	if(a.first == b.first){
//		return mp_first[a.second] < mp_first[b.second];
//	}
//	return a.first > b.first;
//}

int main(){
	cin >> n >> c;
	for(int i = 0; i < n; i++){
		cin >> a[i]; mp[a[i]]++;
		if(mp_first[a[i]] == 0) mp_first[a[i]] = i; 
	}
	
	for(auto it : mp_first) cout << it.first << " " << it.second << "\n";
	
//	for(auto i : mp) v.push_back({i.second, i.first});
//
//	for(auto i : v){
//		for(int j = 0; j < i.first; j++){
//			cout << i.second << " ";
//		}
//	}
	
	
	return 0;
}




/* 



*/