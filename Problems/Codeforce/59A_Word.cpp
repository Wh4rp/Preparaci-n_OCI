#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n=0;
    string xd;
    cin>>xd;
    for(int i=0; i<xd.size(); i++){

        if(xd[i]==toupper(xd[i])){
            n++;
        }
        if(xd[i]==tolower(xd[i])){
            n--;
        }
    }

    if(n>0){
    for(int i=0; i<xd.size(); i++){

        xd[i]=toupper(xd[i]);
    }
    }

    if(n<=0){
    for(int i=0; i<xd.size(); i++){

        xd[i]=tolower(xd[i]);
    }
    }
    cout<<xd<<"\n";
return 0;
}