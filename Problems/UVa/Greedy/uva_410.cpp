#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int c, s, x, aux, m=0, y=1, imbalance=0;

    while(cin>>s>>c){
        cin>>c>>s;
        vector <int> v;
        for(int i=0; i<s; i++){
            cin>>aux;
            v.push_back(aux);
            m+=aux;
        }
        for(int j=0; j<(2*c-s); j++){
            v.push_back(0);
        }
        m/=c;

        sort(v.begin(), v.end());

        cout<<"Set #"<< y <<"\n";

        for(int k=0; k<c; k++){
            if(v[k]==0){
            cout<<k<<": "<<v[2*c-1-k]<<"\n";
            }
            if(v[k]!=0){
            cout<<k<<": "<<v[k]<<" "<<v[2*c-1-k]<<"\n";
            }
            imbalance+=abs( v[k]+v[2*c-1-k] - m);
        }

        cout<<"IMBALANCE = "<<imbalance<<"\n";


        m=0;
        y++;
        imbalance=0;
    }
     
return 0;
}

// Esta maloooo aaah.