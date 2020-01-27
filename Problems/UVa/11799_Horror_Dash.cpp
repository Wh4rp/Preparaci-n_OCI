#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int t, n;
    cin>>t;
    int m;
    m=1;
    while(t--){

        cin>>n;
        int x=0, y;
        while(n--){
            cin>>y;
            x=max(x, y);
        }
        cout<<"Case "<<m<<": "<<x<<"\n";
        m++;
    }
     
return 0;
}