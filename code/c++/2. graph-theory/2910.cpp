#include<bits/stdc++.h>
using namespace std;
int n, c, temp;
map<int,int> mp, mp_index;
vector<pair<int,int>> v;
bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.first == b.first){
		return mp_index[a.second] < mp_index[b.second];
	}
	return a.first > b.first;
}
int main(){
	cin >> n >> c;
	for(int i = 0; i < n; i++){
		cin >> temp;
		mp[temp]++;
		if(mp_index[temp] == 0) mp_index[temp] = i + 1;
	}
	
	for(auto it : mp) v.push_back({it.second, it.first});
	
	sort(v.begin(), v.end(), cmp);
	
	for(auto it : v){
		for(int i = 0; i < it.first; i++){
			cout << it.second << " ";
		}
	}
	return 0;
}