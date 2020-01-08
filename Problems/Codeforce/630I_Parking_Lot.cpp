#include<bits/stdc++.h>
using namespace std;
long long binpow(int a, int b){
    if(b==0) return 1;
    long long res;
    if(b%2==1){
        res=binpow(a, (b-1)/2);
        return res*res*a;
    }
    if(b%2==0){
        res=binpow(a, (b)/2);
        return res*res;
    }
}
int main(){
    
    
    long long n;
    cin>>n;
    cout<<(n-3)*9*binpow(4,n-3)+6*binpow(4,n-2)<<"\n";
     
return 0;
}