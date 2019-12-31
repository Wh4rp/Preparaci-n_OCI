#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, m;
    cin>>n>>m;
    m=m%((n)*(n+1)/2);
    for(int i=1; i<=n; i++){
        if(m<i){
            break;
        }
        m-=i;
    }
    cout<<m<<"\n";
return 0;
}