#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int w[4];
    w[1]=1;
    w[2]=1;
    w[3]=10;
    cin>>n;
    bool possible[n];

    possible[0] = true;
for (int k = 1; k <= 3; k++) {
for (int x = n; x >= 0; x--) {
if (possible[x]) possible[x+w[k]] = true;
}
}
if(possible[n]) cout<<"yes";
else cout<<"no";
    return 0;
}