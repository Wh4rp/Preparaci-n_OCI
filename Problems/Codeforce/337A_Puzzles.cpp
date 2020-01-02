#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int v[1000];
    int n,m, i, s=100000;
    cin>>n>>m;
     for(i=0; i<m; i++)cin>>v[i];
    sort(v, v+m);
    for(int j=0; j<m-n+1; j++ ){
        s=min(s, v[j+n-1]-v[j]);
    }
    cout<<s<<"\n";
return 0;
}