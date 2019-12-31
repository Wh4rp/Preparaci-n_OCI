#include<bits/stdc++.h>
using namespace std;
int mcd(int a, int b){
    if(a==b){
        return a;
    }
    if(a<b){
        swap(a,b);
    }
    if(a%b==0){
        return b;
    }
    else{
        a=a%b;
        return mcd(b, a);
    }

}
int main(){
    ios_base::sync_with_stdio(false);//holaaaaaaaaaaaaaaa
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, m, z, s;
    cin>>n>>m>>z;
    s=m*n/mcd(m,n);
    s=z/s;
    cout<<s<<"\n";
     
return 0;
}