#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n, x, y, z;

    cin>>n;
    
    vector<int> v[n+1];
    for(int i=1; i<=n; i++){
        cin>>x;
        v[i].push_back(x);
    }
    for(int i=1; i<=n; i++){
        vector<bool> xd(n+1, true);
        int x=0;
        y=i;
        do
        {
            if(xd[y]==true){
                xd[y]=false;
                y=v[y][0];
                continue;
            }
            else{
                cout<<y<<" ";
                break;
            }
        } while (x==0);
        
        
    }
    cout<<"\n";
return 0;
}