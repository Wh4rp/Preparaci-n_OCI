#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n;
    cin>>n;
    if(n>2){
    cout<<n-2<<"\n";
    }
    else{
        if(n==1){
            cout<<"3\n";
        }
        if(n==2){
            cout<<"4\n";
        }
    }
return 0;
}