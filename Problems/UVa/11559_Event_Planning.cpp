#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n, b, h, s, p, a;
    while(cin>>n>>b>>h>>s){
        int smin=100000000;
        while(h--){
            bool xd4=false, xd3=false;
            cin>>p;
            if(p*n>b){
                xd3=true;
            }
            for(int i=0; i<s; i++){
                cin>>a;
                if(xd3==false){
                    if(a>=n){
                        xd4=true;
                    }
                }
            }
            if((xd4==true)&&(xd3==false)){
              smin=min(smin, n*p);
            }
        }
        if(smin!=100000000){
          cout<<smin<<"\n";
        }
        else{
          cout<<"stay home\n";
        }
    }
     
return 0;
}