#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    while(cin>>n){
        if(n==0) break;
        else{
            string xd;
            int c=0;
            n--;
            while(n--){
                cin>>xd;
                if(xd=="+z"){
                    c++;
                }
                if(xd=="-z"){
                    c--;
                }
                else{
                    continue;
                }
            }
            if(c%4==0) cout<<"+x\n";
            if(c%4==1) cout<<"+z\n";
            if(c%4==2) cout<<"-x\n";
            if(c%4==3) cout<<"-z\n";
        }
    }
    
     
return 0;
}