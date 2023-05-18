
#ifndef EJ_POO_PERSONAS_H
#define EJ_POO_PERSONAS_H

#include <iostream>
#include <string>
#include <array>
#include "materias.h"

using namespace std;

class personas {
    int d;
    string nom;
    string ap;
    string em;

public:
    personas(){}
    personas(int dni, string nombre, string apellido, string email){
        d=dni;
        nom=nombre;
        ap=apellido;
        em=email;
    }


    void setd(int dni);
    void setnom(string nombre);
    void setap(string apellido);
    void setem(string email);

    int getd();
    string getnom();
    string getap();
    string getem();

};

class alumnos:public personas{
    string ca; //carrera
    int ed; //edad

public:
    materias m[3];
    alumnos():personas()
    {

    }

    alumnos(int dni, string nombre, string apellido, string email, string carrera, int edad):personas(dni,nombre,apellido,email),ca(carrera),ed(edad)
    {

    }


    void setm(int mat[3]); // revisar
    void setca(string carrera);
    void seted(int edad);

    string getca();
    int geted();
    //array<string, 3> getm();


    //void inscripcion1(int code);
    //void inscripcion2(int code);
    //void inscripcion3(int code);
    void inscripcion(int code);
    void info_alum();
    void def();
    /* int carga1(int nta);
    int carga2(int nta);
    int carga3(int nta);
     */
    void carga(int nta, int code);

};

class profesores:public personas{
    string ti;

public:
    materias e[3]; //Materias que esneña.
    profesores():personas(){

    }

    profesores(int dni, string nombre, string apellido, string email, string titulo):personas(dni,nombre,apellido,email),ti(titulo)
    {

    }


    void setti(string titulo);

    string getti();

    void info_profe();
    void defin();
    void materiasensenia(string nombree, int code);

};

#endif //EJ_POO_PERSONAS_H