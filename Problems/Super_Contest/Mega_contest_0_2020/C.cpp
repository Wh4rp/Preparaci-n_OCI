#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int a, b, s;
    cin>>a>>b;
    if((a*b)%2==0){
        cout<<a*b/2<<"\n";
        return 0;
    }
    else{
        cout<<(a*b-1)/2<<"\n";
    }
     
return 0;
}