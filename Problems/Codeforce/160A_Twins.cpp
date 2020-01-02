#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, i=0, aux, s=0, s1=0, c=0;
    vector<int> v;
    for(cin>>n; i<n; i++){
        cin>>aux;
        v.push_back(aux);
        s+=aux;
    }
    sort(v.begin(), v.end());
    for(int i=n-1; i>=0; i--){
        c++;
        if((s1+=v[i])*2>s){
            cout<<c<<"\n";
            return 0;
        }
    }


return 0;
}