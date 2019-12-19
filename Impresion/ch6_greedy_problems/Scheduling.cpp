#include<bits/stdc++.h>
using namespace std;

bool sortsec(const pair<int, int> &a, const pair<int, int> &b ){
    return (a.second < b.second);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int a, b, s=1, c=0, n;
    vector< pair<int, int> > v;
    cin>>n;
        for(int j=0; j<n; j++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        c++;
        }
    sort( v.begin(), v.end(), sortsec);
    int k=0;
    for(int i=0; i<c;i++){
        if(v[i].first>=v[k].second){
            k=i;
            s++;
        }
    }
    cout<<s<<"\n";
return 0;
}