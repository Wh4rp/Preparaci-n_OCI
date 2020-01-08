#include<bits/stdc++.h>
using namespace std;

// el algoritmo para sacar el máximo común divisor de dos números enteros.
int mcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return mcd (b, a % b);
}

/* con ternary operator podemos escribirlo en una sola línea


int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}


*/

// el algoritmo para sacar el mínimo común multiplo de dos números enteros.
int mcm(int a, int b){
    return a*b/mcd(a,b);
}

int main(){
    
    int a, b;
    cin>>a>>b;
    cout<<mcd(a,b)<<"\n";
    cout<<mcm(a,b)<<"\n";
    
     
return 0;
}