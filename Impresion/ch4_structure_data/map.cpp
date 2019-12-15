#include<bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> m;               // defino mi mapa como una asocicion de string con enteros
    m["monkey"] = 4;                   // de este modo defino enteros asociados a algún string
    m["banana"] = 3;
    m["harpsichord"] = 9;
    cout << m["banana"] << "\n"; // 3
    cout << m["aybabtu"] << "\n"; // 0 // si pido el valor de algun string que no le haya 
                                       // asociado nada me devolverá 0

    if (m.count("aybabtu")) {          // esta funcion verifica si dicho string esta en el mapa
// key exists
}
    
    for (auto x : m) {                 //  de esta manera veo todas las kays del mapa
cout << x.first << " " << x.second << "\n";
}

    return 0;
}