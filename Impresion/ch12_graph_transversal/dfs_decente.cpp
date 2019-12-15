#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vector<vi> g;
vector<bool> visitado;

void dfs(int nodo){
    cout<<nodo<<endl;
    visitado[nodo]=true;
    for(int n: g[nodo]){
        if(visitado[n]==false){
            dfs(n);
        }
    }
}
int main(){
    int v, a, nododfs;
    cin>>v>>a;
    visitado.assign(v, false); 
    g.assign(v, vector<int>()); 
    for(int i=0; i<a; i++){
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[x].push_back(y);
    }
    for(int j=0; j<v; j++){
        visitado[j]=false;
    }
    cin>>nododfs;
    dfs(nododfs);
return 0;
}