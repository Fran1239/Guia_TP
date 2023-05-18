/*Escribir una función que intercambie el valor de dos variables, es decir si X=5 e Y=7 tras
aplicar la función, por ejemplo haciendo "intercambiar(X,Y)" se tiene que X=7 e Y=5.*/

#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main() {
    int x, y;

    cout<<"Ingrese el valor de X: "<<endl;
    cin>>x;
    cout<<"Ingrese el valor de Y: "<<endl;
    cin>>y;

    swap(&x, &y);

    cout<<"El valor de X es: "<<x<<endl;
    cout<<"El valor de Y es: "<<y<<endl;

    return 0;
}

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
