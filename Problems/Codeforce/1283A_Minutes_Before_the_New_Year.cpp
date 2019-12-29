#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    vector<int> v;
    int n, h, m, s;
    cin>>n;
    while(n--){
        cin>>h>>m;
        s=h*60+m;
        s=24*60-s;
        v.push_back(s);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"\n";
    }
return 0;
}