#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;                          // definimos vector y el tipo de dato que contiene

    v.push_back(3);                         // ingresamos el entero "3" como v[0];
    v.push_back(1);                         // ingresamos el entero "1" como v[1];

    cout<<v[0]<<"\n"<<v[1]<<"\n";           // "3...1" su salida se puede obtener con cout sin problemas
    cout<<v.size();                         // es el tamaño del vector
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"\n";                   // esto regresaria todos los datos dentro del vector v
    }
    for( auto x : v){
        cout<< x<<"\n";                     // una versión mucho más corta e igual valida. 
                                            // x toma todos los valores dentro del vector de manera decente(v[0],v[1],v[2]...)
    }
    cout<<v.back()<<"\n"; // "1"
                                            // ".back" regresa el último elemento del vector
    v.pop_back();                           // ".pop_back" elimina el ultimo dato
    cout<<v.back(); // "3"

    vector <int> w={1,2,3,4,5};             // otra forma de crear un vector, con sus datos determinados
    vector <int> z(10,5);                   // tamaño 10 y sus todos sus datos iguales a 5
    vector <int> a(10);                     // tamaño 10;
    vector <int> b(a);                      // vector copia de a;

    v.insert(v.begin(), 10);                // insertar al inicio
    v.insert(v.begin()+4,12 );              // insertar en la cuarta posicion
    v.erase(v.begin()+5);                   // eliminar la quinta posicion
    v.erase(v.begin(), v.begin() + 5);      // eliminar los primero 5 elemntos
 return 0;
}