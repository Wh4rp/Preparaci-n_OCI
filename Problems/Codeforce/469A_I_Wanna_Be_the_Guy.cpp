#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin>>n;
    set<int> s;
    int a, b;
    cin>>a;
    while (a--)
    {
        cin>>b;
        s.insert(b);
    }
    cin>>b;
    while (b--)
    {
        cin>>a;
        s.insert(a);
    }
    if(s.size()==n){
        cout<<"I become the guy.\n";
    }
    else{
        cout<<"Oh, my keyboard!\n";
    }
    
     
return 0;
}