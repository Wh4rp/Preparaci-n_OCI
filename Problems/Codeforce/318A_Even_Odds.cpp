#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    long long k, n;
    cin>>n>>k;
    if(n%2==0){
        if(2*k<=n){
            cout<<2*k-1<<"\n";
        }
        else{
            k-=n/2;
            cout<<2*k<<"\n";
        }

    }
    else{
        n++;
        if(2*k<=n){
            cout<<2*k-1<<"\n";
        }
        else{
            k-=n/2;
            cout<<2*k<<"\n";
        }


    }
     
return 0;
}