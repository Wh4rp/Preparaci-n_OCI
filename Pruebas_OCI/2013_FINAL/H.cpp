#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, h, r, puntos=0;
    cin>>n>>h>>r;
    while(n--){
        vector<int> v(h, 0);
        int aux, m=1, p=0;
        for(int i=0; i<r; i++){
            cin>>aux;
            int m=1;
            for(int j=0; j<h-1; j++){
                aux++;
                aux%=h;
                if(m==1){
                    v[aux]--;
                }
                else{
                    v[aux]++;
                }
                m*=-1;
                cout<<v[aux]<<"\n";
            }
        }
        for(auto y : v){
            p=max(p, y);
        }
        puntos+=p;
    }
    cout<<puntos<<"\n";

return 0;
}