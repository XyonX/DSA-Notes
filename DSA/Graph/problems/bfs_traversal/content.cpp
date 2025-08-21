#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//GRAPH TRAVERSAL BFS


void bfs(vector<vector<int>>& adj, int n, int starting, vector<int>& visited);

void traverse(vector<vector<int>>&adj,vector<int>&visited){

    for(int i=0;i<visited.size();i++){
        if(visited[i] !=1)
        bfs(adj,adj.size(),i,visited);
    }
}

//the aproach is to use a queue
void bfs(vector<vector<int>>&adj,int n,int starting,vector<int>&visited){
    queue<int>q;
    
    //putting the startting node in queue
    q.push(starting);
    visited[starting]=1;
    while(!q.empty()){
        int node = q.front();

        q.pop();
        cout<<node<<" ";
        for(int adn: adj[node]){
            if(!visited[adn]){
                q.push(adn);
                visited[adn]=1;
            }
            
        }
    }
    
}

int main() {
    int n = 4;
    vector<vector<int>> adj(n);

    // add edges (undirected graph)
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[2].push_back(0);
    adj[3].push_back(1);

    vector<int> visited(n, 0);

    cout << "BFS traversal of graph: ";
    traverse(adj, visited);

    return 0;
}