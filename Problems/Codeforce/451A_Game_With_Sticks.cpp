#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int a, b;
    cin>>a>>b;
    if(min(a,b)%2==0){
        cout<<"Malvika\n";
    }
    else{
        cout<<"Akshat\n";
    }
    
     
return 0;
}