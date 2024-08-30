#include <iostream>

using namespace std;

int main(){

    // a)

    int n;

    cout << "Ingrese un numero no negativo: ";
    cin >> n;
    cout << endl;

    if (n < 0) {
        cout << "Por favor, ingrese un numero no negativo." << endl;
    } else {
        int factorial1 = 1;
        int i = n;

        cout << n << "! = ";

        while (i >= 1) {
            factorial1 *= i;
            cout << i;

            if (i > 1) {
                cout << " x ";
            } else {
                cout << " = " << factorial1 << endl;
            }

            i--;
        }
    }

    cout << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////

    // b)

    int pres;
    cout << "Ingrese la precision deseada (cantidad de terminos en la suma): ";
    cin >> pres;

    double e = 1.0;
    double factorial2 = 1.0;
    int a = 1;

    cout << "Valor de 'e' con " << pres << " terminos: ";

    while (a <= pres) {
        factorial2 *= a;
        e += 1.0 / factorial2;
        a++;
    }

    cout << e << endl;
    cout << endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////

    // c)

    double x;
    int precision;

    cout << "Ingrese el valor de x: ";
    cin >> x;

    cout << "Ingrese la precision deseada (cantidad de terminos en la suma): ";
    cin >> precision;

    double result = 1.0;
    double term = 1.0;
    int b = 1;

    while (b <= precision) {
        term *= x / b;
        result += term;

        b++;
    }
    cout << " e^"<< x << " = " << result << endl;

    return 0;
}
