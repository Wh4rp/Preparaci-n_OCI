#include<bits/stdc++.h>
using namespace std;
vector <int> subset;
void search(int k, int n) {
if (k == n) {
for(int i=0; i<subset.size(); i++){
    cout<<subset[i]<<" ";
}
cout<<"\n";
} else {
search(k+1, n);
subset.push_back(k);
search(k+1, n);
subset.pop_back();
}
}
int main(){
    int n;
    cin>>n;
    search(1, n+1);        // Este código imprime los subconjuntos del conjunto 1 al n
    return 0;
}