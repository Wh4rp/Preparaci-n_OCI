#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int t;
    cin>>t;
    while(t--){
        int a, b, c, n, s;
        cin>>a>>b>>c>>n;
        s=a+b+c+n;
        if(s%3!=0){
            cout<<"NO\n";
        }
        else{
            if((a>s/3)or(b>s/3)or(c>s/3)){
                cout<<"NO\n";
            }
            else{
                cout<<"YES\n";
            }
        }
    }    
     
return 0;
}