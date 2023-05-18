#ifndef EJ_POO_PERSONAS_H
#define EJ_POO_PERSONAS_H

#include <iostream>
using namespace std;

class materias {
    int cod;
    string nomb;
    int nta;

public:
    materias();
    materias (int codigo){
        cod=codigo;
    }
    materias(string nombreM, int codigo, int nota){
        nomb=nombreM;
        cod=codigo;
        nta=nota;
    }

    void setcod(int codigo);
    void setnomb(string nombreM);
    void setnta(int nota);

    int getcod();
    string getnomb();
    int getnta();


};


#endif //EJ_POO_PERSONAS_H