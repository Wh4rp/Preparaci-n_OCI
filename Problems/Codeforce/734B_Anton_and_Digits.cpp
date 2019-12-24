#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int a2, a3, a5, a6, s=0;
    int k=0;
    cin>>a2>>a3>>a5>>a6;
    k=min(a5, a6);
    k=min(a2, k);
    s=k*256;
    k=a2-k;
    k=min(k, a3);
    s+=k*32;
    cout<<s<<"\n";
return 0;
}