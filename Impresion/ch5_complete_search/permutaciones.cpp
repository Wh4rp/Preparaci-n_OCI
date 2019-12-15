#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n, k=1;
    cin>>n;
for (int i = 0; i < n; i++) {
v.push_back(i);
}
do {
    cout<<k<<"º permutacion: ";
    for(int j=0; j<n; j++){
        cout<<v[j]<<" ";
    }
    cout<<"\n";
    k++;
// process permutation
} while (next_permutation(v.begin(),v.end()));

    return 0;
}