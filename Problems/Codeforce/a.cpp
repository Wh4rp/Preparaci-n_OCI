#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<4){
            switch (n)
            {
            case 2:
                cout<<1;
                break;
            case 3:
                cout<<7;
            default:
                break;
            }
        }
        else{
            if(n%2==0){
                n/=2;
                while(n--){
                    cout<<1;
                }
            }
            else{
                cout<<7;
                n-=3;
                n/=2;
                while(n--){
                    cout<<1;
                }
            }
        }
        cout<<"\n";
    }
     
return 0;
}