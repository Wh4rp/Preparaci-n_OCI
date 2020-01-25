#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n, aux;
    cin>>n;
    vector<int> v;
    for(int i=1; i<=n; i++){
        cin>>aux;
        v.push_back(aux);
    }
    sort(v.begin(), v.end());
    for(int j=0; j<n; j++){
        cout<<v[j]<<" ";
    }
    cout<<"\n";
return 0;
}