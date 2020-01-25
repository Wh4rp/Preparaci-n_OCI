#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, m, l;
    cin>>n>>m;
    l=m-1;
    if((m*n)%l==0){
        cout<<n*m/l-1<<"\n";
        return 0;
    }
    cout<<n*m/l<<"\n";
    
return 0;
}