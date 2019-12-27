#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    vector<int> xd;
    int n;
    cin>>n;
    for(int i=0;i<n; i++ ){
        int z=0, aux, x, c;
        cin>>x>>c;
        vector<int> v;
        vector<int> s;
        for(int j=0; j<x; j++){
            cin>>aux;
            z+=aux;
            v.push_back(aux);
            s.push_back(z);
        }
        
        


    }

    for(int m=0; m<n; m++){
        cout<<xd[m]<<"\n";
    }
     
return 0;
}