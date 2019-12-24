#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int v[4], n=0, x=-1;
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    for(int i=0; i<3; i++){
        for(int j=i+1; j<4; j++){
            if(v[i]==v[j]){
                n++;
                v[j]=x;
                x--;
            }
        }
    }
    cout<<n<<"\n";
     
return 0;
}