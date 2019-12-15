#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
s.push(3);
s.push(2);
s.push(5);
cout << s.top()<<"\n"; // 5
s.pop();
cout << s.top()<<"\n"; // 2
    
    return 0;
}