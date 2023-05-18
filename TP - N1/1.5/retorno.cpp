/*Un número primo es un número entero positivo X que tiene solamente dos divisores
distintos: 1 y X. Los primeros números enteros primos son 2, 3, 5, 7, 11 y 13.
Un numero primo D se llama divisor primo de un entero positivo P si existe un entero
positivo K tal que D * K = P. Por ejemplo, 2 y 5 son divisores primos de 20.
Suponiendo que se dan dos enteros positivos N y M, obtener una función de retorno
booleana que permita verificar N y M tienen el mismo conjunto de divisores primos.
Por ejemplo:
N = 15 y M = 75, los divisores primos son los mismos: {3, 5}.
N = 10 y M = 30, los divisores primos no son los mismos: {2, 5} no es igual a {2, 3, 5}.*/


#include <iostream>
using namespace std;

void genera_divisibles(int divisibles[]);
bool mismo_conjunto_divisores(int divisibles[], int n, int m, int tam);

int main() {
    int n, m, tam;
    int divisibles[n];

    genera_divisibles(divisibles);

    cout<<"Ingrese dos valores enteros positivos: "<<endl;
    cin>>n>>m;

    mismo_conjunto_divisores(divisibles, n, m, tam)

    return 0;
}

void genera_divisibles(int divisibles[]) {
    int indice = 0;
    int p=100;

    for (int i = 2; i <= p; i++) {
        bool es_divisible = false;

        for (int j = 2; j <= i; j++) {
            if (i % j == 0 && j != i) {
                es_divisible = true;
                break;
            }
        }

        if (!es_divisible) {
            divisibles[indice] = i;
            indice++;
        }
    }
}

bool mismo_conjunto_divisores(int divisibles[], int n, int m, int tam) {
    bool div_n[tam], div_m[tam];


    for (int i = 0; i < tam; i++) {
        div_n[i] = (n % divisibles[i] == 0);
        div_m[i] = (m % divisibles[i] == 0);
    }

    for (int i = 0; i < tam; i++) {
        if (div_n[i] != div_m[i]) {
            return false;
        }
    }

    return true;
}


