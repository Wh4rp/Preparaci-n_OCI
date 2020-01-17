#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;                // Se define el stack
s.push(3);                       // .push sirve para colocar elementos arriba
s.push(2);
s.push(5);
cout << s.top()<<"\n"; // 5     // top() devuelve el elemento de arriba
s.pop();                        // .pop() elimina el elemtno de arriba
cout << s.top()<<"\n"; // 2
cout << s.size()<<"\n";// 2     // .size() regresa la cantidad de elementos 
                                // del stack  
if(s.empety()) cout<<"Vacío"    // regresa cuando el stack está vacío
    return 0;
}
