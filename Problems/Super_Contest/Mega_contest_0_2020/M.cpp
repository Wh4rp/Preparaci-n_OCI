#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    char v[52][52];
    int a, b;
    cin>>a>>b;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            cin>>v[i][j];
        }
    }
    int t=0;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            if(v[i][j]!='!'){
                if(v[i][j]==v[i+1][j]){
                    t++;
                }
                if(v[i][j]==v[i+1][j-1]){
                    t++;
                }
                if(v[i][j]==v[i-1][j]){
                    t++;
                }
                if(v[i][j]==v[i-1][j-1]){
                    t++;
                }
                if(t>2){
                    
                }
            }
        }
    }
     
return 0;
}