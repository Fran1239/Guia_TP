#include "personas.h"
#include "materias.h"
#include <iostream>


using namespace std;

void personas::setd(int dni) {
    d=dni;
}

void personas::setnom(string nombre) {
    nom=nombre;
}

void personas::setap(string apellido) {
    ap=apellido;
}

void personas::setem(string email) {
    em=email;
}

int personas::getd() {
    return d;
}
string personas::getnom() {
    return nom;
}

string personas::getap() {
    return ap;
}

string personas::getem() {
    return em;
}

void alumnos::setca(string carrera) {
    ca=carrera;
}

void alumnos::seted(int edad) {
    ed=edad;
}

void alumnos::setm(int mat[3]) {
    for (int i=0;i<3;i++){
        m[i]=mat[i];
    }
}



string alumnos::getca() {
    return ca;
}

int alumnos::geted() {
    return ed;
}


void alumnos::info_alum() {
    cout<< "Nombre: "<<getnom()<<endl;
    cout<< "Apellido: "<<getap()<<endl;
    cout<< "Edad: "<<geted()<<endl;
    cout<< "DNI: "<<getd()<<endl;
    cout<< "Email: "<<getem()<<endl;
    cout<< "Carrera: "<<getca()<<endl;

    for (int i=0;i<3;i++){
        if (m[i].getcod()==1){
            cout<< "Inscripto en Programacion. "<<endl;
            cout<< "NOTA: "<<m[i].getnta()<<endl;
        }else if(m[i].getcod()==2){
            cout<< "Inscripto en Matematica. "<<endl;
            cout<< "NOTA: "<<m[i].getnta()<<endl;
        }else if (m[i].getcod()==3){
            cout<< "Inscripto en Fisica. "<<endl;
            cout<< "NOTA: "<<m[i].getnta()<<endl;
        }else if((m[0].getcod()==0)&&(m[1].getcod()==0)&&(m[2].getcod()==0)) {
            cout<< "NO esta inscripto en ninguna materia. "<<endl;
        }
    }

}

void profesores::setti(string titulo) {
    ti=titulo;
}

string profesores::getti() {
    return ti;
}

void profesores::info_profe() {
    int num;
    cout<< "Nombre: "<<getnom()<<endl;
    cout<< "Apellido: "<<getap()<<endl;
    cout<< "DNI: "<<getd()<<endl;
    cout<< "Email: "<<getem()<<endl;
    cout<< "Titulo: "<<getti()<<endl;
    cout<< "Materia que ensenia: ";
    for (int i=0;i<3;i++) {
        if (e[i].getcod()!=0){
            cout<<e[i].getnomb()<<endl;
            num=i;
        }
    }
    if (e[num].getcod()==0){
        cout<< "No esta asignado a ninguna materia. "<<endl;
    }

}


void alumnos::def() {
    string programacion;
    string matematica;
    string fisica;
    m[0].setnomb(programacion);
    m[1].setnomb(matematica);
    m[2].setnomb(fisica);
    m[0].setnta(0);
    m[1].setnta(0);
    m[2].setnta(0);

    m[0].setcod(0);
    m[1].setcod(0);
    m[2].setcod(0);

}

//void alumnos::inscripcion1(int code) {
//    m[0].setcod(code);
//}

void alumnos::inscripcion(int code) {
    m[code - 1].setcod(code);
}

/* void alumnos::inscripcion2(int code) {
    m[1].setcod(code);
}

void alumnos::inscripcion3(int code) {
    m[2].setcod(code);
}
*/

/* int alumnos::carga1(int nta) {
    m[0].setnta(nta);
}

int alumnos::carga2(int nta) {
    m[1].setnta(nta);
}

int alumnos::carga3(int nta){
    m[2].setnta(nta);
}
*/

void alumnos::carga(int nta, int code){
    m[code-1].setnta(nta);
}

void profesores::defin(){
    e[0].setcod(0);
    e[1].setcod(0);
    e[2].setcod(0);
}
void profesores::materiasensenia(string nombree, int code) {
    string programacion;
    string matematica;
    string fisica;
    e[code-1].setnomb(nombree);
    e[code-1].setcod(code);
}