#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n;
    int x0, y0, x, y;
    while((cin>>n)&&(n!=0)){
        cin>>x0>>y0;
    while (n--)
    {
        cin>>x>>y;
        if((x==x0)or(y0==y)){
            cout<<"divisa\n";
        }
        else{
            if(x<x0){
                if(y<y0){
                    cout<<"SO\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
            else{
                if(y<y0){
                    cout<<"SE\n";
                }
                else{
                    cout<<"NE\n";
                }
            }
        }
    }
    }
    
     
return 0;
}