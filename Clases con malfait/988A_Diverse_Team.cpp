#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, k, aux;
    cin>>n>>k;
    int v[101];
    int s[101];
    int m=0;
    for(int i=0; i<102;i++){
        v[i]=0;
    }
    for(int j=1; j<=n; j++){
        cin>>aux;
        v[aux]++;
        if(v[aux]==1){
            s[m]=j;
            m++;
        }
    }
    if(m!=k){
        cout<<"NO\n";
    }
    else{
    cout<<"YES\n";
    for(int h=0; h<k; h++){
        cout<<s[h]<<" ";
    }
    cout<<"\n";
    }

     
return 0;
}