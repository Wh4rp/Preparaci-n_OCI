#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    bool xd=false;
    int n, aux, z, k;
    cin>>n;
    vector<int> v;
    vector<int> pos;
    set<int> s;
    for(int i=0; i<n;i++){
        s.insert(i+1);
    }
    for(int j=0; j<n; j++){
        cin>>aux;
        v.push_back(aux);
        if(aux!=0){
            s.erase(aux);
        }
        if(aux==0){
            pos.push_back(j);
        }
    }
    int kk=pos.size();
    int kkk=pos[0];
    for(auto m : pos){
        kk--;
        for(auto c : s){
            v[m]=c;
            s.erase(c);
            break;
        }
        if(xd==true){
            swap(v[m], v[z]);
        }
        if(v[m]==(m+1)){
            xd=true;
            z=m;
            cout<<"YES\n";
            if( kk==0 ){
                swap(v[m], v[kkk]);
            }
        }
    }
    for(auto l : v){
        cout<<l<<" ";
    }
    cout<<"\n";

return 0;
}