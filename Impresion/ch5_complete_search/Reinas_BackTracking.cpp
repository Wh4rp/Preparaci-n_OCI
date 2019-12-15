#include<bits/stdc++.h>
using namespace std;
int z=0;
int column[10];
int diag1[10];
int diag2[10];
void search(int y, int n){

if(y==n){
    z++;
    return;
}

for (int x = 0; x < n; x++) {
if (column[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
column[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
search(y+1, n);
column[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
}
}


int main(){

int n;
cin>>n;
search(0, n);
cout<<z<<"\n";
return 0;
}