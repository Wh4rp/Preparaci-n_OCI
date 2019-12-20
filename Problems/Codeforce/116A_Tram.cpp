#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int uwu=0, x=0;
    int n;
    cin>>n;
    int s, e;
    for(int i=0; i<n; i++){
        cin>>s>>e;
        x+=e-s;
        uwu=max(uwu,x);
    }
    cout<<uwu<<"\n";
return 0;
}