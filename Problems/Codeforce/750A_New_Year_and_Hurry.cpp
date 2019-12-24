#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, k, i=0;
    cin>>n>>k;
    k=240-k;
    
    while(2*k>=(5*i*(i+1))){
        i++;
    }
    if(i>n)i=n+1;
    cout<<i-1<<"\n";
    
return 0;
}