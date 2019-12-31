#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    bool xd=false;
    set<double> s;
    int n, x0, y0, x1, y1, c=1;    
    cin>>n>>x0>>y0;
    for(int i=0; i<n; i++){
        cin>>x1>>y1;
        if(y1==y0){
            xd=true;
            continue;
        }
        s.insert(1.0*(x0-x1)/(y0-y1));
    }
    if(xd==true){
    cout<<s.size()+c<<"\n";
    }
    else{
        cout<<s.size()<<"\n";
    }
return 0;
}