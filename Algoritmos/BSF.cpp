#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    queue<int> q;

    cin>>n;
    vector<bool> visitado;
    visitado.assign(n,false);
    int distancia[n];
    vector<vector<int>>v;
    v.assign(n,vector<int>());
    v[0].push_back(1);
    v[1].push_back(2);


    int x=0;
    visitado[x] = true;
    distancia[x] = 0;
    q.push(x);
while (!q.empty()) {
    int s = q.front(); q.pop();
    // process node s
    for (auto u : v[s]) {
        if (visitado[u]) continue;
        visitado[u] = true;
        distancia[u] = distancia[s]+1;
        q.push(u);
        }

}
cout<<distancia[2];

return 0;
}