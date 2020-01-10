#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.setf(ios::fixed);
    cout.precision(4);
    
    int n, s=0, aux, uno=0, dos=0, tres=0;
    cin>>n;
    while(n--){
        cin>>aux;
        switch (aux)
        {
        case 4:
            s++;
            break;
        case 3:
            if(uno==0){
                tres++;
            }
            else{
                uno--;
                s++;
            }
            break;
        case 2:
            if(dos==0){
                dos++;
            }
            else{
                dos--;
                s++;
            }
            break;
        case 1:
            if(tres==0){
                uno++;
            }
            else{
                tres--;
                s++;
            }
            break;
        default:
            break;
        }
    }
    s+=tres+dos;
    if(uno>(2*dos)){
        uno-=2*dos;
        int x=0;
        if(uno%4) x++;
        uno/=4;
        uno+=x;
        s+=uno;
    }
    cout<<s<<"\n";
     
return 0;
}