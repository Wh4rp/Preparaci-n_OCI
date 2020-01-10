#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj; // grafo representado como una lista de adyacencia 
int n; // Número de vértices

vector<bool> visited;

void dfs(int v) {
    visited[v] = true;
    cout<<"Se visitó el nodo: "<<v<<"\n";
    for (int u : adj[v]) {
        if (!visited[u])
            dfs(u);
    }
}

int main(){
    int v;
    cin>>n;
    visited.assign(n, false);
    adj.assign(n, vector<int>());

    for(int i = 0; i < n; i++) {
        cin >> v;
        adj[i].push_back(v);     //adj[v].push_back(i); Grafos no direccionales
    }
    dfs(3);
    return 0;
}