#include<bits/stdc++.h>
using namespace std;
vector<int> adj[104];
bool visited[104];

void postOrder(int here){
	if(!visited[here]){
		if(adj[here].size() == 1) postOrder(adj[here][0]);
		if(adj[here].size() == 2){
			postOrder(adj[here][0]);
			postOrder(adj[here][1]);
			
		}
		visited[here] = 1;
		cout << here << " ";
	}
	return;
}




int main(){
	adj[1].push_back(2);
	adj[1].push_back(3);
		
	adj[2].push_back(4);
	adj[2].push_back(5);
	
	adj[3].push_back(6);
	
	
//	preOrder(1);
	postOrder(1);
	
	return 0;
}