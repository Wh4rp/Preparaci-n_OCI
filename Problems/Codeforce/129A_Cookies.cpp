#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, s=0, xd=0;
    cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
        s+=v[i];
    }
    cout<<s<<" \n";
    for(int j=0; j<n; j++){
        if(s-v[j]%2==0){
            xd++;
        }
        cout<<s-v[j]<<"\n";
    }
     cout<<xd<<"\n";
return 0;
}