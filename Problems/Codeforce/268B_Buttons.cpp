#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n, s=0,x;
    cin>>n;
    x=n-1;
    s+=n;
    for(int i=1; i<n; i++){
        s+=i*x;
        x--;
    }
    
    cout<<s<<"\n";
return 0;
}