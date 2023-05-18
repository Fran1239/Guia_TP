#include <iostream>
#include "personas.h"
#include "materias.h"
using namespace std;

void menu(){
    cout<<endl;
    cout<< "                   MENU "<<endl;
    cout<< "-------------------------------------------"<<endl;
    cout<< "| [1]- Alta (Alumnos y docentes)           |"<<endl;
    cout<< "| [2]- Inscribir a materia(Alumnos)        |"<<endl;
    cout<< "| [3]- Anotar titular(Docente)             |"<<endl;
    cout<< "| [4]- Cargar nota(Alumnos)                |"<<endl;
    cout<< "| [5]- Modificar datos(Alumnos y Docentes) |"<<endl;
    cout<< "| [6]- Mostrar persona                     |"<<endl;
    cout<< "| [7]- Salir.                              |"<<endl;
    cout<< "-------------------------------------------"<<endl;
    cout<<endl;
}

int main() {
    int r,ad, nott, cant, cod=0, cont=0, l=0;
    string n;
    int dn, eda, num, x=0;

    alumnos* a = new alumnos[10];
    profesores* p = new profesores[10];
    materias m("",0,0);

    //a[0] = alumnos(22, "Juan", "Jose", "juan", "ing", 22);

    do {
        menu();
        cout<< "Elija la opcion: "<<endl;
        cin>>r;
        cout<<endl;

        switch(r){
            case 1: {
                r=1;
                // while (r==1) {
                cout << "-Alta (Alumnos y docentes)-" << endl;
                cout << " [1]- Alumnos." << endl;
                cout << " [2]- Docentes." << endl;
                cout << endl;
                cout << "Elija la opcion: " << endl;
                cin >> ad;
                if (ad == 1) {
                    cout << "Ingresar el nombre del alumno: " << endl;
                    cin >> n;
                    a[l].setnom(n);
                    cout << "Ingresar el apellido: " << endl;
                    cin >> n;
                    a[l].setap(n);
                    cout << "Ingresar la edad: " << endl;
                    cin >> eda;
                    a[l].seted(eda);
                    cout << "Ingresar el dni: " << endl;
                    cin >> dn;
                    bool existe;
                    do{
                        existe = false;
                        for (int i=0;i<10;i++){
                            if(dn==a[i].getd()){
                                cout<< "El dni ingresado ya existe. "<<endl;
                                cout<< "Vuelva a ingresarlo: "<<endl;
                                cin>>dn;
                                existe = true;
                                break;
                            }
                        }
                    }while(existe);
                    a[l].setd(dn);
                    cout << "Ingresar el mail: " << endl;
                    cin >> n;
                    a[l].setem(n);
                    cout << "Ingresar la carrera: " << endl;
                    cin >> n;
                    a[l].setca(n);
                    cout << "Los datos del alumno: " << endl;
                    a[l].info_alum();
                } else if (ad == 2) {
                    cout << "Ingresar el nombre del profesor: " << endl;
                    cin >> n;
                    p[x].setnom(n);
                    cout << "Ingresar el apellido: " << endl;
                    cin >> n;
                    p[x].setap(n);
                    cout << "Ingresar el dni: " << endl;
                    cin >> dn;
                    p[x].setd(dn);
                    cout << "Ingresar el email: " << endl;
                    cin >> n;
                    p[x].setem(n);
                    cout << "Ingresar el titulo: " << endl;
                    cin >> n;
                    p[x].setti(n);
                    cout << endl;
                    cout << "Los datos del profesor: " << endl << endl;
                    p[x].info_profe();

                } else {
                    cout << "El numero ingresado no es valido. " << endl;
                }
                l++;
                r++;
                x++;
                //}
                break;
            }

            case 2: {
                cout << "-Inscribir a materia-" << endl;
                cout<< "Ingrese el dni del alumno que quiere inscribir: "<<endl;
                cin>>dn;
                for (int i=0;i<10;i++){
                    if(dn==a[i].getd()){
                        num=i;
                        break;
                    }
                }
                if(a[num].getd() != dn){
                    cout<< "ERROR-El dni ingresado no existe."<<endl;
                    break;
                }
                cout << "Ingrese la candad de materias en las que se quiere inscribir de 1-3. " << endl;
                cin >> cant;

                while (cont != cant) {
                    int mat = 0;
                    cout << "Ingrese el numero de la materia en la que desea inscribir al alumno: " << endl;
                    cout << " [1]- Programacion- " << endl;
                    cout << " [2]- Matematica  - " << endl;
                    cout << " [3]- Fisica      - " << endl << endl;
                    //cin>>ma[cont];
                    cin >> mat;

                    if ((mat > 0) && (mat < 4)) {
                        a[num].inscripcion(mat);
                    }
                    //cout<<ma[cont]<<endl;
                    //if (ma[cont]==1) {
                    //    a.inscripcion1(ma[cont]);
                    //}else if(ma[cont]==2){
                    //    a.inscripcion2(ma[cont]);
                    //}else if(ma[cont]==3){
                    //    a.inscripcion3(ma[cont]);
                    //}
                    cont++;
                }

                a[num].info_alum();


                break;
            }

            case 3: {
                int codd; //codigo de la materia
                string mate; //nombre

                cout << "-   Anotar titular   -" << endl;
                cout<< "Ingrese el dni del profesor: "<<endl;
                cin>>dn;
                for (int i=0;i<10;i++){
                    if(dn==p[i].getd()){
                        num=i;
                        break;
                    }
                }

                if(dn!=p[num].getd()){
                    cout<< "ERROR-El dni ingresado no existe. "<<endl;
                }

                cout << "Ingrese el nombre de la materia: " << endl;
                cin >> mate;
                cout<< "Ingrese el codigo de la materia: "<<endl;
                cout << " [1]- Programacion- " << endl;
                cout << " [2]- Matemaca  - " << endl;
                cout << " [3]- Fisica      - " << endl << endl;
                cin >> codd;
                p[num].materiasensenia(mate, codd);
                p[num].info_profe();


                break;
            }

            case 4: {
                cout << "-   Cargar nota     -" << endl << endl;
                cout << "Ingresar dni del alumno y codigo de la materia: " << endl;
                cin>>dn;
                for (int i=0;i<10;i++){
                    if(dn==a[i].getd()){
                        num=i;
                        break;
                    }
                }
                if (dn!=a[num].getd()){
                    cout<< " ERROR-El dni ingresado no existe. "<<endl;
                }
                cout << " [1]- Programacion- " << endl;
                cout << " [2]- Matematica  - " << endl;
                cout << " [3]- Fisica      - " << endl << endl;

                cin >> cod;
                cout << "Ingresar la nota: " << endl;
                cin >> nott;
                while ((nott < 0) || (nott > 11)){
                    cout << "La nota no es valida. Vuelva a ingresarla: " << endl;
                    cin >> nott;
                }

                a[num].carga(nott, cod);

                /* if(cod==1){
                    a.carga1(nott);
                }else if(cod==2){
                    a.carga2(nott);
                }else if (cod==3){
                    a.carga3(nott);
                }
                */
                a[num].info_alum();

                break;
            }

            case 5:{
                int de,rta;
                cout<< "-Modificar datos-"<<endl;
                cout << " [1]- Alumnos." << endl;
                cout << " [2]- Docentes." << endl;
                cout << endl;
                cin>>de;
                cout<< "Ingrese el dni de la persona: "<<endl;
                if(de==1) {
                    cin>>dn;
                    for (int i=0;i<10;i++){
                        if(dn==a[i].getd()){
                            num=i;
                        }
                    }

                    if(dn!=a[num].getd()){
                        cout<< "ERROR-El dni ingresado no existe. "<<endl;
                    }
                    cout<< "Que dato desea modificar? "<<endl;

                    cout << " [1]- Nombre   - " << endl;
                    cout << " [2]- Apellido - " << endl;
                    cout << " [3]- Dni      - " << endl;
                    cout << " [4]- Mail     - " << endl;
                    cout << " [5]- Carrera  - " << endl;
                    cout << " [6]- Edad     - " << endl;

                    cin>>rta;
                    if(rta==1){
                        cout<< "Ingrese el nuevo nombre: "<<endl;
                        cin>>n;
                        a[num].setnom(n);
                    }else if(rta==2){
                        cout<< "Ingresar el nuevo apellido: "<<endl;
                        cin>>n;
                        a[num].setap(n);
                    }else if (rta==3){
                        cout<< "Ingresar el nuevo dni: "<<endl;
                        cin>>dn;
                        a[num].setd(dn);
                    }else if (rta==4) {
                        cout << "Ingresar el nuevo mail: " << endl;
                        cin >> n;
                        a[num].setem(n);
                    }else if (rta==5){
                        cout<< "Ingresar la nueva carrera: "<<endl;
                        cin>>n;
                        a[num].setca(n);
                    }else if(rta==6){
                        cout<< "Ingresar la nueva edad: "<<endl;
                        cin>>eda;
                        a[num].seted(eda);
                    }

                    cout<< "Los nuevos datos del alumno son: "<<endl;
                    a[num].info_alum();

                }else if(de==2){
                    cin>>dn;
                    for (int i=0;i<10;i++){
                        if(dn==p[i].getd()){
                            num=i;
                        }
                    }
                    if (dn!=a[num].getd()){
                        cout<< "ERROR-El dni ingresado no existe. "<<endl;
                    }
                    cout<< "Que dato desea modificar? "<<endl;

                    cout << " [1]- Nombre   - " << endl;
                    cout << " [2]- Apellido - " << endl;
                    cout << " [3]- Dni      - " << endl;
                    cout << " [4]- Mail     - " << endl;
                    cout << " [5]- tulo   - " << endl;

                    cin>>rta;
                    if(rta==1){
                        cout<< "Ingrese el nuevo nombre: "<<endl;
                        cin>>n;
                        p[num].setnom(n);
                    }else if(rta==2){
                        cout<< "Ingresar el nuevo apellido: "<<endl;
                        cin>>n;
                        p[num].setap(n);
                    }else if (rta==3){
                        cout<< "Ingresar el nuevo dni: "<<endl;
                        cin>>dn;
                        p[num].setd(dn);
                    }else if (rta==4){
                        cout<< "Ingresar el nuevo mail: "<<endl;
                        cin>>n;
                        p[num].setem(n);
                    }else if (rta==5){
                        cout<< "Ingresar el nuevo tulo: "<<endl;
                        cin>>n;
                        p[num].setti(n);
                    }
                    cout<< "Los nuevos datos del profesor son: "<<endl;
                    p[num].info_profe();
                }


                break;
            }

            case 6: {
                int de, rta;
                cout<< "-Mostrar Persona- "<<endl;
                cout << " [1]- Alumnos." << endl;
                cout << " [2]- Docentes." << endl;
                cout << endl;
                cin >> de;
                cout << "Ingrese el dni de la persona: " << endl;
                if (de == 1) {
                    cin >> dn;
                    for (int i = 0; i < 10; i++) {
                        if (dn == a[i].getd()) {
                            num = i;
                        }
                    }
                    if (dn != a[num].getd()) {
                        cout << "ERROR-El dni ingresado no existe. " << endl;
                    }
                    a[num].info_alum();
                }else if(de==2){
                    cin >> dn;
                    for (int i = 0; i < 10; i++) {
                        if (dn == a[i].getd()) {
                            num = i;
                        }
                    }
                    if (dn != a[num].getd()) {
                        cout << "ERROR-El dni ingresado no existe. " << endl;
                    }
                    p[num].info_profe();
                }
            }
            case 7:{
                cout<< "SALIR DEL MENU. "<<endl;
                break;
            }

            default:
                cout<< "OPCION INVALIDA. "<<endl;
                break;

        }


    }while (r!=7);

    delete[]a;
    delete[]p;

}
