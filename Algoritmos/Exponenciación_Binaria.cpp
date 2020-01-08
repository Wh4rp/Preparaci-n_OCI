#include<bits/stdc++.h>
using namespace std;

//Formula recursiva

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

//Formula iterativa, si b es muy grande

long long binpow2(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
        cout<<res<<"\n";
    }
    return res;
}

//Algoritmo para pow(a,b)%m 

long long binpow3(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main(){
    
    long long a, b;
    cin>>a>>b;
    cout<<binpow(a,b)<<"\n";
    cout<<binpow2(a,b)<<"\n";

return 0;
}