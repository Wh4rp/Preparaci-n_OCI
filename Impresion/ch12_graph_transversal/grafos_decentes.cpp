// A simple representation of graph using STL, 
// for the purpose of competitive programming 
#include<bits/stdc++.h> 
using namespace std; 

// A utility function to add an edge in an 
// undirected graph. 
void addEdge(vector<int> adj[], int u, int v) 
{ 
	adj[u].push_back(v); 
	adj[v].push_back(u); 
} 

void printGraph(vector<int> adj[], int v){
    for(int i=0; i<v; i++){
        cout<<"Los nodos del vértice "<<i<<" son: ";
        for(auto x: adj[i]){
            cout<<x<<"\t";
        }
        cout<<"\n";
    }
}
 
int main() 
{ 
	int V = 5; 

	// The below line may not work on all 
	// compilers. If it does not work on 
	// your compiler, please replace it with 
	// following 
	// vector<int> *adj = new vector<int>[V]; 
	vector<int> adj[V]; 

	// Vertex numbers should be from 0 to 4. 
	addEdge(adj, 0, 1); 
	addEdge(adj, 0, 4); 
	addEdge(adj, 1, 2); 
	addEdge(adj, 1, 3); 
	addEdge(adj, 1, 4); 
	addEdge(adj, 2, 3); 
	addEdge(adj, 3, 4); 
    printGraph(adj, V);
	return 0; 
} 
