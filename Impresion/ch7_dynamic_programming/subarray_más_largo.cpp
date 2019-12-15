#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    int length[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int sol=0;
for (int k = 0; k < n; k++) {
length[k] = 1;
for (int i = 0; i < k; i++) {
if (array[i] < array[k]) {
length[k] = max(length[k],length[i]+1);
}
}
sol=max(sol,length[k]);
}
cout<<sol;
}