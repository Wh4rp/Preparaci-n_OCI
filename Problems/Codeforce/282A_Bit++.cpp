#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, x=0;
    string xd;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>xd;
            if(xd[1]=='+'){
                x++;
            }
            if(xd[1]=='-'){
                x--;
            }
    }
    cout<<x<<"\n";

return 0;
}