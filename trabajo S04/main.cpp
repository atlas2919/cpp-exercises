#include <iostream>

using namespace std;

int main() {
    // Solicitar al usuario una nota entre 0 y 100
    double nota;
    cout << "Por favor, ingresa tu nota entre 0 y 100: ";
    cin >> nota;
    cout << endl;

    // Evaluar la nota e imprimir la letra correspondiente
    if (nota > 90) {
        cout << "Tu nota es A" << endl;
    }
    else if (nota > 80) {
        cout << "Tu nota es B" << endl;
    }
    else if (nota > 70) {
        cout << "Tu nota es C" << endl;
    }
    else if (nota > 60) {
        cout << "Tu nota es D" << endl;
    }
    else {
        cout << "Tu nota es F" << endl;
    }

    return 0;
}
