#include<bits/stdc++.h>
using namespace std;
vector<int> adj[104];
bool visited[104];


void preOrder(int here){
	if(!visited[here]){
		visited[here] = 1;
		
		cout << here << " ";
		
		if(adj[here].size() == 1) preOrder(adj[here][0]);
		if(adj[here].size() == 2){
			preOrder(adj[here][0]);
			preOrder(adj[here][1]);
		}
	}
	
	return;
}


int main(){
	adj[1].push_back(2);
	adj[1].push_back(3);
		
	adj[2].push_back(4);
	adj[2].push_back(5);
	
	adj[3].push_back(6);
	
	
	preOrder(1);
	
	return 0;
}