#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i=100000;
    int coins[3];
    coins[0]=1;
    coins[1]=2;
    coins[2]=10;
    cin>>n;
    int value[n];
    int first[n];

    value[0] = 0;
for (int x = 1; x <= n; x++) {
value[x] = i;
for (auto c : coins) {
if (x-c >= 0 && value[x-c]+1 < value[x]) {
value[x] = value[x-c]+1;
first[x] = c;
}
}
}

while (n > 0) {
cout << first[n] << "\n";
n -= first[n];
}
    return 0;
}