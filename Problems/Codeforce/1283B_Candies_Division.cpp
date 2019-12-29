#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    vector<int> v;
    int t, a,b, s;
    cin>>t;
    while(t--){
        cin>>a>>b;
        s=a/b;
        s=s*b;
       if((a%b)>b/2){
            s+=b/2;
        }
        else{
            s+=a%b;
        }
        v.push_back(s);
    }
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"\n";
    }
return 0;
}