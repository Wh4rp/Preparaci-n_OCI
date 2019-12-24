#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int a, b, k=0;
    cin>>a>>b;
    for(int i=1; i<11; i++){
        k++;
        if((i*a-b)%10==0){
            break;
        }
        if(i*a%10==0){
            break;
        }
    }
    cout<<k<<"\n";
return 0;
}