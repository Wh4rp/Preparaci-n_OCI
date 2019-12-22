#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, a, b, s=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if((b-a)>1){
            s++;
        }
    }
     cout<<s<<"\n";
return 0;
}