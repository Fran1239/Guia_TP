#include "materias.h"
#include <iostream>
using namespace std;

int materias::getcod() {
    return cod;
}

string materias::getnomb() {
    return nomb;
}

int materias::getnta() {
    return nta;
}

void materias::setcod(int codigo) {
    cod=codigo;
}

void materias::setnomb(string nombre){
    nomb=nombre;
}

void materias::setnta(int nota) {
    nta=nota;
}
materias::materias(string nombreM, int codigo, int nota){

}
