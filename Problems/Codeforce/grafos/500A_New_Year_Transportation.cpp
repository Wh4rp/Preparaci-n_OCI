#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
int n;
void dfs(int u, int x){
    for(int y: v[u]){
        if(y<x){
            dfs(y, x);
        }
        if(y==x){
            cout<<"YES\n";
        }
        if(y>x){
            cout<<"NO\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);

    int m, k;
    cin>>n>>k;
    
    v.assign(n+1, vector<int>());
    for(int i=1; i<n; i++){
        cin>>m;
        v[i].push_back(i+m);
    }
    dfs(1, k);
    
return 0;
}