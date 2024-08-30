#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {

    /////////////////////////  1  ////////////////////////

    // Semilla para la generación de números aleatorios
    srand(int(time(nullptr)));

    // Crear un arreglo para representar los autos y sus números
    int autos[10];
    for (int i = 0; i < 10; i++) {
        autos[i] = i + 1;
    }

    // Mezclar aleatoriamente el arreglo para simular el orden de llegada
    for (int i = 0; i < 10; i++) {
        int randomIndex = rand() % 10;
        swap(autos[i], autos[randomIndex]);
    }

    // Imprimir el orden de llegada
    for (int i = 0; i < 10; i++) {
        cout << "Posicion " << (i + 1) << ": Auto " << autos[i] << endl;
    }

    cout << endl;

    ///////////////////////////////  2  //////////////////////////////

    const int arregloTamanio = 20;
    int arreglo[arregloTamanio] = {0};
    int num, posicion;

    while (true) {
        cout << "Ingrese un numero mayor a 0 (o -99 para salir): ";
        cin >> num;

        if (num == -99) {
            break;
        }

        if (num <= 0) {
            cout << "Ingrese un numero mayor a 0." << endl;
            continue;
        }

        cout << "Ingrese la posicion donde desea insertar el numero: ";
        cin >> posicion;

        if (posicion < 1 || posicion > arregloTamanio) {
            cout << "Posición no valida. Debe ser entre 1 y " << arregloTamanio << endl;
            continue;
        }

        posicion--; // Ajustamos la posición para que sea un índice de arreglo

        // Desplazar los elementos hacia la derecha para hacer espacio
        for (int i = arregloTamanio - 1; i > posicion; i--) {
            arreglo[i] = arreglo[i - 1];
        }

        // Insertar el nuevo número en la posición deseada
        arreglo[posicion] = num;

        // Mostrar el contenido del arreglo
        cout << "Contenido del arreglo despues de la insercion: ";
        for (int i = 0; i < arregloTamanio; i++) {
            cout << arreglo[i] << " ";
        }
        cout << endl;
    }

    cout << endl;

    //////////////////////////////  3  //////////////////////////////////////

    const int numSillas = 20;
    vector<int> sillas(numSillas, 0);
    int sillasOcupadas = 0;

    while (sillasOcupadas < numSillas) {
        cout << "Ingrese su numero de identificacion (2 digitos): ";
        int id;
        cin >> id;

        if (id < 10 || id >= 100) {
            cout << "El numero de identificacion debe tener 2 digitos." << endl;
            continue;
        }

        cout << "Ingrese el numero de la silla que desea ocupar (1 a 20): ";
        int silla;
        cin >> silla;

        if (silla < 1 || silla > numSillas) {
            cout << "Numero de silla no valido." << endl;
            continue;
        }

        if (sillas[silla - 1] == 0) {
            sillas[silla - 1] = id;
            sillasOcupadas++;
        } else {
            cout << "La silla " << silla << " esta ocupada. Por favor, elija otra silla." << endl;
            cout << endl;
        }

        cout << "Distribucion de sillas:" << endl;
        for (int i = 0; i < numSillas; i++) {
            if (sillas[i] == 0) {
                cout << "Silla " << (i + 1) << ": Libre" << endl;
            } else {
                cout << "Silla " << (i + 1) << ": Ocupada por ID " << sillas[i] << endl;
            }
        }

        cout << "Sillas libres: " << (numSillas - sillasOcupadas) << endl;
    }

    cout << "Todas las sillas han sido asignadas. El programa ha terminado." << endl;




    return 0;
}
