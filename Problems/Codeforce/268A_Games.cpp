#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, a, b, s=0, c=0;
    vector <int> v1(101,0);
    vector<int> v2(101, 0);
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        v1[a]++;
        v2[b]++;
        c=max(c,max(a,b));
    }
    for(int j=0; j<c+1; j++){
        s+=v1[j]*v2[j];
    }
    cout<<s<<"\n";

return 0;
}