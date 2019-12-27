#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n, x, y;
    bool lol=false;
    cin>>n;
    vector<int> graph[n+1];
    
    for(int i=1; i<n+1; i++){
        cin>>x;
        graph[i].push_back(x);
    }
    for(int i=1; i<n+1; i++){
       
        x=graph[i][0];
        y=graph[x][0];
        if(graph[y][0]==i){
            lol=true;
            cout<<"YES\n";
            break;
        }
    }
    if(lol==false){
        cout<<"NO\n";
    }
return 0;
}