#include<bits/stdc++.h>
using namespace std;
char xd[512][512];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int r, c;
    cin>>r>>c;
    
    for(int i=0; i<r; i++){
        cin>>xd[i];
        for(int j=0; j<c; j++){
            if(xd[i][j]=='.'){
                xd[i][j]='D';
            }
        }
        //cout<<xd[i]<<"\n";
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(xd[i][j]=='W'){
                if((xd[i-1][j]=='S')||(xd[i+1][j]=='S')||(xd[i][j-1]=='S')||(xd[i][j+1]=='S')){
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
    }
    cout<<"YES\n";
    for(int i=0; i<r; i++){
        cout<<xd[i]<<"\n";
    }
return 0;
}