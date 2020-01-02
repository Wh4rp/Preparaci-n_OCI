#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n, j, i=0, a[10010];
    for(cin>>n; i<n; i++){
        cin>>a[i];
    }
    for(i=n; i>0; i>>=1){
    for(j=0; j<n; j+=i){
    if(is_sorted(a+j, a+j+i)){cout<<i<<"\n";
    return 0;}
    }
    }
    return 0;
}