#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n, x, l=0, m=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x!=-1){
            m+=x;
        }
        if(m==0){
            l++;
        }
        if(m!=0){
            if(x==-1){
                m--;
            }
        }
    }
    cout<<l<<"\n";
     
return 0;
}