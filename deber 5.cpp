#include <iostream>

using namespace std;

int main (){

    // ejercicio 1

    int num;

    cout << "Ingrese un número entero positivo: ";
    cin >> num;

    if (num <= 0) {
        cout << "Por favor, ingrese un número entero positivo." << endl;
    } else {
        cout << "Los factores primos de " << num << " son: " << endl;

        for (int divisor = 2; divisor <= num; divisor++) {
            while (num % divisor == 0) {
                cout << divisor << endl;
                num /= divisor;
            }
        }

        cout << endl;
    }


    return 0;
}
