#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, aux;
    cin>>n;

    
    for(int j=1; j<=n; j++){
        vector<int> v;
        for(int i=0; i<3; i++){
            cin>>aux;
            v.push_back(aux);
        }
        sort(v.begin(), v.end());
        cout<<"Case "<<j<<": "<<v[1]<<"\n";
    }
     
return 0;
}