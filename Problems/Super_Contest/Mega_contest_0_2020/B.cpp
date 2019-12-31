#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    long long a, b, d, s=1;
    cin>>a>>b;
    d=b-a;
    if(d>5){
        cout<<"0\n";
        return 0;
    }
    else{
        b=b%10;
        while(d--){
            s*=b;
            if(b==0) break;
            b--;
        }
        s=s%10;
        cout<<s<<"\n";
    }
return 0;
}