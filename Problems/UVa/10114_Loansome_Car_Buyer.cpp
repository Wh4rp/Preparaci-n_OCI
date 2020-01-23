#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    string m, ms;
    m="moth";
    ms="moths";
    int n;
    while ((cin>>n)&&(n>0))
    {

    int  x, mes, aux;

    float pres, cuot, val1, val2;
        cin>>cuot>>pres>>x;
        float v[n+1];
        for(int k=0; k<=n; k++){
            v[k]=0;
        }
        for(int i=0; i<x; i++){
            cin>>mes;
            cin>>v[mes];
        }
        for(int k=0; k<=n; k++){
            if(v[k]==0){
                v[k]=v[k-1];
            }
        }
        val1=pres;
        val2=pres;
        for(int j=1; j<=n; j++){
            val1*=(1-v[j]);
            val2-=cuot;

            cout<<val1<<" "<<val2<<"\n";
            if(val1<val2){
                if(j==1){
                    cout<<j<<" "<<m<<"\n";
                }
                else{
                    cout<<j<<" "<<ms<<"\n";
                }
                break;
            }
        }
        
    }
    
     
return 0;
}
 