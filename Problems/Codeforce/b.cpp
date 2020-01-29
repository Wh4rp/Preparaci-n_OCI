#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n;
    cin>>n;
    while(n--){
        string s, t, z;
        cin>>s>>t;
        bool lol=false;
        int p=0, c=1, p0;
        while(1){
            p0=p;
            for(int i=0; i<s.size(); i++){
                if(t[p]==s[i]){
                    p++;
                }
                if(p==t.size()-1){
                    cout<<c<<"\n";
                    lol=true;
                }
            }
                if(lol==true){
                    break;
                }
           if(p0==p){
                cout<<-1<<"\n";
                break;
            }
            c++;
        }
    }
     
return 0;
}