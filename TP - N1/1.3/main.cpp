/*Obtener una función recursiva que calcule el Máximo Común Divisor de dos números M y
N.*/

#include <iostream>

using namespace std;

int main() {
    int m, n, r;
    cout << "Ingrese dos numeros enteros positivos: ";
    cin >> m >> n;

    // algoritmo de Euclides
    while (n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    // el resultado es el ultimo valor no nulo de n o m
    int result = (n == 0) ? m : n;

    cout << "El Multiplo Comun Divisor de " << m << " y " << n << " es: " << result << endl;
    return 0;
}