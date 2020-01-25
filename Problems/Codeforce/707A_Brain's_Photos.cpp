#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    char xd;
    int a, b, c;
    cin>>a>>b;
    c=a*b;
    while(c--){
        cin>>xd;
        if((xd!='W')&&(xd!='B')){
            cout<<"#Color\n";
            return 0;
        }
    }
    cout<<"#Black&White\n";
return 0;
}