    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.setf(ios::fixed);
        cout.precision(4);
        
        vector<int> x(100, 0);
        int n, m, aux;
        string v;
        cin>>n>>m;
        cin>>v;
        for(int i=0; i<n; i++){
            aux=v[i];
            aux-=96;
            x[aux]+=1;
            if(x[aux]>m){
                cout<<"NO\n";
                return 0;
            }
        }
        cout<<"YES\n";
         
    return 0;
    }