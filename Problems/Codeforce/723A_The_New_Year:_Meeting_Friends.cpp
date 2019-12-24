#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int v[3];
    int m=0, s=0;

    cin>>v[0]>>v[1]>>v[2];
    sort(v, v+3);
    s=abs(v[0]-v[1])+abs(v[1]-v[2]);
    cout<<s<<"\n";
     
return 0;
}