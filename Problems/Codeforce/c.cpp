#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n;
    cin>>n;
    while(n--){
        int vmi, vma, val, l, c=0;
        cin>>l>>val;
        string v;
        cin>>v;
        for(int i=0; i<l; i++){
            if(v[i]=='0')c++;
            else{c--;}
            vmi=min(vmi, c);
            vma=max(vma, c);
        }
        if(c==0){
            if((val<=vma)&&(val>=vmi)){
                cout<<-1<<"\n";
            }
        }
        int s=0, p=0;
        while(1){
            for(int i=0; i<l; i++){
            if(v[i]=='0')p++;
            else{p--;}
            if(p==l){s++;}
            }
            int exi, exs;
            exi=p+vmi;
            exs=p+vma;
            if(c>0){
                if(l<exi){
                    cout<<s<<"\n";
                    break;
                }
            }
            if(c<0){
                if(l>exs){
                    cout<<s<<"\n";
                }
            }
        }


    }
     
return 0;
}