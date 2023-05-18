/*Obtener una función recursiva que calcule el factorial de un numero N.*/

#include <iostream>
using namespace std;

int main() {
    int N, F=1;

    cout<<"Ingrese un numero: "<<endl;
    cin>>N;

    for (int i = 1; i <= N; ++i) {
        F = F*i;
    }

    cout<<"El factorial del numero "<<N<<" es: "<<F<<endl;
}

