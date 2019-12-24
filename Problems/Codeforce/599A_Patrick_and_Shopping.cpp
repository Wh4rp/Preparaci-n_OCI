#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int a, b, c, s, d;
    cin>>a>>b>>c;
    d=min(2*(a+c),2*(b+c));
    s=min(2*(a+b),min(a+b+c,d));
    cout<<s<<"\n";

return 0;
}