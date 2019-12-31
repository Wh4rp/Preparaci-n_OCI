#include<bits/stdc++.h>
using namespace std;
int c=0;
void xd(int a, vector<int> j){
    if(j[a]==0){
        j[a]++;
    }
    if(j[a]!=0){
        xd(a+1, j);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    vector<int> v(1000000, 0);
    int n, aux;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>aux;
        xd(aux, v);
    }
    cout<<c<<"\n";
return 0;
}