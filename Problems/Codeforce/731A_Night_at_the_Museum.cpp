#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n, p=1, s=0;
    string v;
    cin>>v;
    for(int i=0; i<v.size(); i++){
        n=v[i]-96;
        
        s+=min(abs(n-p), min(abs(26+n-p), abs(26-n+p)));
        p=n;
        
    }
    cout<<s<<"\n";
return 0;
}