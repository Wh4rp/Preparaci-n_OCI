#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
q.push(3);
q.push(2);
q.push(5);
cout << q.front()<<"\n"; // 3
q.pop();
cout << q.front()<<"\n"; // 2
return 0;
}