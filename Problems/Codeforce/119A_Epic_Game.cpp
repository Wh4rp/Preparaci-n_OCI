#include<bits/stdc++.h>
using namespace std;
int mcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return mcd (b, a % b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int a, b, c, d=1;
    cin>>a>>b>>c;
    while(c>0){
        d*=-1;
        if(d==-1){
            c-=mcd(a,c);
        }
        else{
            c-=mcd(b,c);
        }
    }
    if(d==-1){
        cout<<"0\n";
    }
    else{
        cout<<"1\n";
    }
return 0;
}