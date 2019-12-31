#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int a, b, c=0;
    cin>>a>>b;
    while(b!=a){
        if((b<a)or(b%2==1))b++;
        else{
            b/=2;
        }
        c++;
    }
    cout<<c<<"\n";
return 0;
}