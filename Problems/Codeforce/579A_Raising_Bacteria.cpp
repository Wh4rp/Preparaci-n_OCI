#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, x=0;
    cin>>n;
    while(n>0){
        if(n%2==1){
            n--;
            x++;
        }
        else{
            n=n/2;
        }
    }
    cout<<x<<"\n";
     
return 0;
}