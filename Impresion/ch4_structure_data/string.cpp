#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "hatti";                    // definir string 
    string b = a+a;                        // al sumar string se concadenan en un nuevo string
    cout << b << "\n"; // hattihatti       
    b[5] = 'v';                            // debemos utilizar ' ' para añadir caracteres
    cout << b << "\n"; // hattivatti
    string c = b.substr(3,4);              // la funcion .substr(a, b) crea otro strig de largo b
                                           // que copia los caracteres desde la posicion a del string seleccionado
                                           // las posiciones empiezan desde el 0...
    cout << c << "\n"; // tiva
}