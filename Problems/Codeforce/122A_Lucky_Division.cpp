#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin>>n;
    int v[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i=0; i<14; i++){
        if(n%v[i]==0){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
     
return 0;
}