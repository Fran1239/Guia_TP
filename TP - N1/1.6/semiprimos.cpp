/*Un semi-primo es un número natural que es el producto de dos números primos no
necesariamente distintos. Por ejemplo, los números 4, 6, 9, 10, 14, 15, 21, 22, 25, 26, son
semi-primos. Dado un numero entero X determinar mediante una función de retorno
boolean si se trata de un número semi-primo.*/

#include <iostream>
#include <cmath>

using namespace std;

bool es_primo(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

bool es_semi_primo(int n) {
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (es_primo(i) && es_primo(n / i)) {
                count++;
            }
            if (count > 1) {
                return false;
            }
        }
    }
    return count == 1;
}

int main() {
    int n;
    cout << "Ingrese un numero para verificar si es semi primo o no: ";
    cin >> n;
    if (es_semi_primo(n)) {
        cout << n << " es semi primo" << endl;
    } else {
        cout << n << " no es semi primo" << endl;
    }
    return 0;
}