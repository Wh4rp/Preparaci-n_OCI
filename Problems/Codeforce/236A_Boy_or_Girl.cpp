#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int x, aux;
    string s;
    set<int> w;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        aux=s[i];
        w.insert(aux);
    }
    x=w.size();
    if(x%2==1){
        cout<<"IGNORE HIM!\n";
    }
    if(x%2==0){
        cout<<"CHAT WITH HER!\n";
    }


return 0;
}