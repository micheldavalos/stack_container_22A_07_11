#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int*> punteros;

    for (size_t i = 0; i < 10; i++)
    {
        //int* e = new int(i);
        punteros.push_back(new int(i));
    }

    // for (auto it = punteros.begin(); 
    // it != punteros.end(); it++)
    // {
    //     auto e = *it;
    //     cout << *e << endl;
    // }
    
    for (auto e: punteros) {
        cout << *e << endl;
    }

    list<int*> copia(punteros);

    punteros.remove_if([](int* e){
        if (*e % 2 == 0) {
            delete e;
            return true;
        } else {
            return false;
        }
    });

    cout << "Punteros" << endl;
    for (auto e: punteros) {
        cout << *e << endl;
    }
    cout << "Copia" << endl;
    for (auto e: copia) {
        cout << *e << endl;
    }
    


    return 0;
}

DANIEL GIOVANNI TORRES CRUZ9:01
yo profe, la actividad de los jugadores
EDGAR AGUILAR GARCIA9:01
yo tambien, civilizaciones
EDUARDO ALBERTO AGUILERA SANCHEZ9:01
yo, la actividad de las civilizaciones
RAFAEL ALEJANDRO ROJAS CASTILLO9:01
Actividad de Civilizaciones
JOSUEL CASTANEDA CURIEL9:01
yo profe , civilizaciones
EDGAR MISAEL MARTINEZ ROMERO9:01
YO igual Civlizaciones
EDGAR DAVID VARGAS FUENTES9:01
yo, actividad de las civilizaciones
ARANZA VANESSA PEREZ NAVARRO9:01
Actividad Civilizaciones
JESUS ALEJANDRO MARTINEZ AVALOS9:02
Yo, Actividad Civilizaciones
ALAN RICARDO ZUNIGA AMEZCUA9:15
yo tambien, actividad civilizaciones