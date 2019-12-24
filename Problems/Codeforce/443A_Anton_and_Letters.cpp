#include<bits/stdc++.h>
using namespace std;
int main(){
    
    set<char> s;
    string xd;
    while(cin>>xd){
        for(int i=0; i<xd.size(); i++){
            if((xd[i]!='{')&&(xd[i]!='}')&&(xd[i]!=',')){
                s.insert(xd[i]);
            }
        }
    }
    cout<<s.size()<<"\n";
    
return 0;
}