#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, a, b, c, d, e, f;
    cin>>n>>a>>b>>c>>d>>e>>f;
    c-=a;
    e-=a;
    d-=b;
    f-=b;
    if(c*e>0 && d*f>0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
return 0;
}