#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, p, c=0;
    string x;
    while(cin>>n>>p){
        c++;
        if(n==0) break;
        for(int i=0; i<n; i++){
            cin.ignore();
            getline(cin,x);
        }
        string name, namex;
        int req, reqx=-1;
        float pricex, price;
        while(p--){
            cin>>name>>price>>req;
            if(req>reqx){ reqx=req; namex=name; pricex=price;}
            if(req==reqx){ if(price<pricex){reqx=req; namex=name; pricex=price;}}
        for(int i=0; i<req; i++){
            cin.ignore();
            getline(cin,x);
        }
        }
        cout<<"RFP #"<<c<<"\n"<<namex<<"\n"<<"\n";
    }
     
return 0;
}