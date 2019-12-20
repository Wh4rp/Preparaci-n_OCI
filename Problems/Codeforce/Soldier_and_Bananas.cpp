#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);

    int k,n, w, s=0;
    cin>>k>>n>>w;
    s=w*(w+1)/2*k-n;
    if(s<0){
        s=0;
    }
    cout<<s<<"\n";
    
     
return 0;
}