#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, a, b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>b){
            cout<<">\n";
        }
        if(a==b){
            cout<<"=\n";
        }
        if(a<b){
            cout<<"<\n";
        }
    }
     
return 0;
}