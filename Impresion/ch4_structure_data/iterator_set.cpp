#include<bits/stdc++.h>
using namespace std;

int main(){
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
     auto it1=s.begin();
    cout<<*it1<<endl;

    for (auto it1= s.begin(); it1 != s.end(); it1++) {
cout << *it1 << "\n";
}
auto it2 = s.find(6);
if (it2 != s.end()) {
cout<<"6 is found"<<endl;
}

// la siguiente función nos da el valor más cercano a x
int x;
cin>>x;
auto it = s.lower_bound(x);               // .lower_bound(x) me da el menor valor en s que a 
if (it == s.begin()) {                    // lo menos es x en el iterador tambien existe 
cout << *it << "\n";                      // .up_bound(x) que me dice el menor valor que es 
} else if (it == s.end()) {               // mayor que x dentro de s en el iterador
it--;
cout << *it << "\n";
} else {
int a = *it; it--;
int b = *it;
if (x-b < a-x) cout << b << "\n";
else cout << a << "\n";
}

    return 0;
}