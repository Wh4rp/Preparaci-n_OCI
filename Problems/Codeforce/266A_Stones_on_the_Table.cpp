#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, s=0;
    string xd;
    char lol;
    cin>>n>>xd;
    lol=xd[0];
    for(int i=1; i<n; i++){
        if(lol==xd[i]){
            s++;
        }
        else{
            lol=xd[i];
        }
    }

    cout<<s<<"\n";
return 0;
}