#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, m;
    string s;
    cin>>n>>m>>s;
    

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            
            if(s[j]=='B'){
                if(s[j+1]=='G'){
                    s[j]='G';
                    s[j+1]='B';
                    j++;
                }
            }
            
        }
    }
    cout<<s<<"\n";
     
return 0;
}