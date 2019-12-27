#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, a, b, c;
    
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
        bool boolcito=false;
        cin>>a>>b>>c;
        if(((a-1)>(b+c))or((b-1)>(a+c))or((c-1)>(a+b))){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i]==0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }

return 0;
}