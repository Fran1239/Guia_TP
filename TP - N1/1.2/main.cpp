/*Dados tres valores enteros A, B y K. Determine, mediante una función la cantidad de numeros
 divisibles por K que se encuentran en el entorno A,B. */

#include <iostream>
using namespace std;

int main() {
    int A, B, K;
    int D=0;

    cout<<"Ingrese el valor de A: "<<endl;
    cin>>A;
    cout<<"Ingrese el valor de B: "<<endl;
    cin>>B;
    cout<<"Ingrese el valor de K: "<<endl;
    cin>>K;

    for (int i = A; i <= B; ++i) {
        if ((i%K)==0)
            D++;
    }

    cout<<"\n La cantidad de numeros divisibles por K que se encuentran en el entorno A,B son: "<<D;

    return 0;
}
