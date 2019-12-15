#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;                     // definimos el conjunto
s.insert(3);                        // con .insert(x) añadimos el elemento x al conjunto
s.insert(2);                        
s.insert(5);
cout << s.count(3)<< "\n"; // 1     // con .count() nos dice si está tal elemento (1)
cout << s.count(4)<< "\n"; // 0     // o no está (0) en el conjunto indicado
s.erase(3);                         // con .erase(x) eliminamos el elemento x del conjunto
s.insert(4);
cout << s.count(3)<< "\n"; // 0
cout << s.count(4)<< "\n"; // 1


set<int> a = {2,5,6,8};             // de nuevo otra manera de definir un conjunto es esta
cout << a.size() << "\n"; // 4      // .size() nos da la cantidad de elementos en el conjunto
for (auto x : a) {                  //  es valido iterar de esta manera, x tomara los 
cout << x << "\n";                  // valores de cada elemento de t
}                                    // notese que los elementos salen ordenamos de menor a mayor

multiset<int> z;                    // multiset es un tipo de conjunto que puede guardar un 
z.insert(5);                        // elemento repetidas veces
z.insert(5);
z.insert(5);
cout << z.count(5) << "\n"; // 3 
z.erase(z.find(5));                 // .erase( .find(x)) elimina una repeticion de x
cout << z.count(5) << "\n"; // 2
z.erase(5);                         // en cambio .erase(x) elimina todos los x en el conjunto
cout << z.count(5) << "\n"; // 0      

return 0;
}