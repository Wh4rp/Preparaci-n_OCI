#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int a, b, x=1, y=1;
    cin>>a>>b;
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            if(x==1){
                cout<<"#";
            }
            else{
                if(y==1){
                    if(j!=b-1){
                        cout<<".";
                        continue;
                    }
                    else{
                        cout<<"#";
                        y*=-1;
                        continue;
                    }
                }
                if(y==-1){
                    if(j==0){
                        cout<<"#";
                        continue;
                    }
                    if(j==b-1){
                        cout<<".";
                        y*=-1;
                        continue;
                    }
                    else{
                        cout<<".";
                        continue;
                    }
                }
            }
            
        }
    
        cout<<"\n";
        x*=-1;
    }
     
return 0;
}