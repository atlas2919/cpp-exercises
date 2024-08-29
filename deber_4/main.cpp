#include <iostream>

using namespace std;

int main() {

    // ingresar datos

    int horas, minutos, segundos;

    cout << "Ingrese las horas: ";
    cin >> horas;

    cout << "Ingrese los minutos: ";
    cin >> minutos;

    cout << "Ingrese los segundos: ";
    cin >> segundos;

    cout << endl;
    cout << horas << ":" << minutos << ":" << segundos << endl;

    // Verificar si los valores ingresados son v�lidos
    if (horas >= 0 && horas < 24 && minutos >= 0 && minutos < 60 && segundos >= 0 && segundos < 60) {
        // Calcular la hora despu�s de una hora
        int nuevaHora = (horas + 1) % 24;

        // Calcular la hora despu�s de un minuto
        int nuevoMinuto = minutos;
        int nuevaSegundo = segundos;

        nuevoMinuto = (minutos + 1) % 60;
        if (minutos + 1 == 60) {
            nuevaHora = (horas + 1) % 24;
        }

        // Calcular la hora despu�s de un segundo
        nuevaSegundo = (segundos + 1) % 60;
        if (segundos + 1 == 60) {
            nuevoMinuto = (minutos + 1) % 60;
            if (minutos + 1 == 60) {
                nuevaHora = (horas + 1) % 24;
            }
        }
        // caso de que la hora sea 0 agragar otro 0.
        if (nuevaHora == 0){
            cout << "Hora despu�s de una hora: " << "0" << nuevaHora << ":" << minutos << ":" << segundos << endl;
            if (nuevoMinuto == 0){
                    cout << "Hora despu�s de un minuto: " << "0" << nuevaHora << ":" << "0" << nuevoMinuto << ":" << segundos << endl;
            }
            if (nuevaSegundo == 0){
                cout << "Hora despu�s de un segundo: " << "0" << nuevaHora << ":" << "0" << nuevoMinuto << ":" << "0" << nuevaSegundo << endl;
            }
        }
        else {
            cout << "Hora despu�s de una hora: " << nuevaHora << ":" << minutos << ":" << segundos << endl;
            cout << "Hora despu�s de un minuto: " << nuevaHora << ":" << nuevoMinuto << ":" << segundos << endl;
            cout << "Hora despu�s de un segundo: " << nuevaHora << ":" << nuevoMinuto << ":" << nuevaSegundo << endl;
        }

    // en caso de que la hora puesta por el usuario sea invalida.

    } else {
        cout << "Error: Los valores ingresados no son validos." << endl;
    }

    return 0;
}
