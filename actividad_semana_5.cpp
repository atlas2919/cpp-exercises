#include <iostream>

using namespace std;

int main(){

/////////////////////////////////////////////////////////////////////////////////////////////////////

    // ejercicio 1

//    int num;
//
//    cout << "Calificacion de numeros." << endl;
//    cout << "Ingrese el numero entero: ";
//    cin >> num;
//    cout << endl;
//
//    if (num > 0){
//        cout << "Numero positivo." << endl;
//    }
//    else if (num == 0){
//        cout << "Numero es 0." << endl;
//    }
//    else {
//        cout << "Numero negativo." << endl;
//    }

/////////////////////////////////////////////////////////////////////////////////////////////////////

    // ejercicio 2

//    int mes;
//
//    cout << "Calculadora de dias del mes." << endl;
//    cout << "ingrese un mes (1-12): ";
//    cin >> mes;
//    cout << endl;
//
//    switch (mes) {
//        case 1:
//            cout << "Enero tiene 31 dias." << endl;
//            break;
//        case 2:
//            cout << "Febrero tiene 28 or 29 dias." << endl;
//            break;
//        case 3:
//            cout << "Marzo tiene 31 dias." << endl;
//            break;
//        case 4:
//            cout << "Abril tiene 30 dias." << endl;
//            break;
//        case 5:
//            cout << "Mayo tiene 31 dias." << endl;
//            break;
//        case 6:
//            cout << "Junio tiene 30 dias." << endl;
//            break;
//        case 7:
//            cout << "Julio tiene 31 dias." << endl;
//            break;
//        case 8:
//            cout << "Agosto tiene 31 dias." << endl;
//            break;
//        case 9:
//            cout << "Septiembre tiene 30 dias." << endl;
//            break;
//        case 10:
//            cout << "Octubre tiene 31 dias." << endl;
//            break;
//        case 11:
//            cout << "Noviembre tiene 30 dias." << endl;
//            break;
//        case 12:
//            cout << "Diciembre tiene 31 dias." << endl;
//            break;
//        default:
//            cout << "Este mes no existe." << endl;
//            break;
//    }

/////////////////////////////////////////////////////////////////////////////////////////////////////

    //ejercicio 3

    float cantidad, euro, dolar;
    int tipo;

    cout << "Sistema de conversiones. \n" << endl;
    cout << "Ingresa el tipo de conversion: " << endl;
    cout << "1) Dolares a Euros." << endl;
    cout << "2) Euros a Dolares. \n" << endl;
    cout << "Ingrese el numero de acuerdo a las opciones dadas: ";
    cin  >> tipo;
    cout << endl;

    if(tipo == 1){
        cout << "Ingresa la cantidad en dolares: ";
        cin >> cantidad;
        cout << endl;

        euro = cantidad * 0.94;

        cout << "La cantidad en Euros seria: " << euro << endl;

    }
    else if(tipo == 2){
        cout << "Ingresa la cantidad en Euros: ";
        cin >> cantidad;
        cout << endl;

        dolar = cantidad / 0.94;

        cout << "La cantidad en Dolares seria: " << dolar << endl;
    }
    else {
        cout << "Esa conversion no es posible." << endl ;
    }





    return 0;
}
