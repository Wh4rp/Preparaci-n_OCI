#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, i=0, s=-1, m=0, aux, sol=0;
    for(cin>>n; i<n; i++){
        cin>>aux;
        if(aux>=m){
            s++;
        }
        else{
            s=0;
        }
        sol=max(sol, s);
        m=aux;
    }
    cout<<sol+1<<"\n";
return 0;
}