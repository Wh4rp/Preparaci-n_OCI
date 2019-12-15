#include<bits/stdc++.h>
using namespace std;
int n;
vector <int> subset;
void search(int k) {
if (k == n) {
// process subset
} else {
search(k+1);
subset.push_back(k);
search(k+1);
subset.pop_back();
}
}
int main(){
    cin>>n;
    search(n);
    return 0;

    
}