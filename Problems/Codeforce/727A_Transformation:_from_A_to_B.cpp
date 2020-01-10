#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int m, n, c=1;
    bool lol=false;
    vector<int> v;
    cin>>m>>n;
    v.push_back(n);
    while(n>=m){
        if(n==m){
            cout<<"YES\n";
            cout<<c<<"\n";
            for(int i=c-1; i>=0; i--){
                cout<<v[i]<<" ";
            }
            cout<<"\n";
            return 0;
        }
        else if(n%2==0){
            n/=2;
            v.push_back(n);
            c++;
            continue;
        }
        else if(n%10==1){
            n--;
            n/=10;
            v.push_back(n);
            c++;
            continue;
        }
        break;
    }
    cout<<"NO\n";
return 0;
}