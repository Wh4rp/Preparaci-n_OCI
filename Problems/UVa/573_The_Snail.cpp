#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    float h, u, d, f;
    while(cin>>h>>u>>d>>f){
        if(h==0){
            break;
        }
        float p=0;
        int t=0;
        while(t<1000){
            t++;
            //DIA
            p+=u;
            if(p>h){
                cout<<"success  on  day  "<<t<<"\n";
                break;
            }
            cout<<p<<"\n";
            //NOCHE
            p-=d;
            if(p<0){
                cout<<"failure  on  day  "<<t<<"\n";
                break;
            }
            //FATIGA
            u*=(1-f/100);
            
        }
    }
     
return 0;
}