

    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.setf(ios::fixed);
        cout.precision(4);
        bool lool=false;
        int xd=0, aux=0;
        string n;
        cin>>n;
        for(int i=0; i<n.size(); i++){
            if((n[i]=='4')or(n[i]=='7')){
                xd++;
            }
        }
        if(xd==0){
            lool=true;
        }
        while(xd!=0){
            aux=xd%10;
            xd/=10;
     
            if((aux!=4)){
                if(aux!=7){
                lool=true;
                break;
                }
            }
        }
        
        if(lool==true){
            cout<<"NO\n";
        }
        if(lool==false){
            cout<<"YES\n";
        }
    return 0;
    }