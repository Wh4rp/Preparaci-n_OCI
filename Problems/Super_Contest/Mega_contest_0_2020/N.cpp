#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n;
    cin>>n;
    long long xd=0, s=0, aux;
    for(int i=0; i<n; i++){
        cin>>aux;
        s+=abs(aux-xd);
        xd=aux;
    }
    cout<<s<<"\n";
     
return 0;
}