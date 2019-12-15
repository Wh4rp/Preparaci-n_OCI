#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool possible[n][n];
    int w[3];
    w[1]=2;
    w[3]=3;
    possible[0][0] = true;
for (int k = 1; k <= n; k++) {
for (int x = 0; x <= W; x++) {
if (x-w[k] >= 0) possible[x][k] |= possible[x-w[k]][k-1];
possible[x][k] |= possible[x][k-1];
}
}

    return 0;
}