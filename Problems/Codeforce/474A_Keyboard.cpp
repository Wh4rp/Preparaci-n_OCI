#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    char xd;
    string hola="qwertyuiopasdfghjkl;zxcvbnm,./'";
    string hola2, hola3="";
    cin>>xd;
    if(xd=='R'){
        cin>>hola2;
        for(int i=0; i<hola2.size(); i++){
            size_t found = hola.find(hola2[i]);
            hola3+=hola[found-1];
        }
    }
    if(xd=='L'){
        cin>>hola2;
        for(int i=0; i<hola2.size(); i++){
            size_t found = hola.find(hola2[i]);
            hola3+=hola[found+1];
        }
    }
    cout<<hola3<<"\n";
     
return 0;
}