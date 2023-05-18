/* Un grillo se encuentra de un lado de la calle y necesita llegar hasta el otro lado.
Suponiendo que se encuentra actualmente en la posición X y que quiere llegar a la posición Y tal que,Y es
mayor o igual que X, determine la cantidad mínima de saltos que el grillo debe realizar para alcanzar su objetivo.
Considere que el grillo siempre salta una distancia fija, D.
El programa debe solicitar el ingreso de tres enteros X, Y y D y mediante una función calcular y posteriormente
mostrar el mínimo número de saltos necesarios. */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float X, Y, D, S;

    //i=0;

    cout<<"Ingrese el punto de partida del grillo:"<<endl;
    cin>>X;
    cout<<"Ingrese el valor a donde desea llegar el grillo: "<<endl;
    cin>>Y;

    if (Y<=X){
        cout<<"El valor de llegada debe ser mayor al de salida"<<endl;
    };

    cout<<"Ingrese la distancia de salto del grillo: "<<endl;
    cin>>S;

    D = (Y-X)/S;


    cout<<"La cantidad de saltos que el grillo debe realizar para cruzar la calles es de: ";
    cout<<ceil(D);

    return 0;
}
