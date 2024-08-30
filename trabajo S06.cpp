#include <iostream>

using namespace std;

int main()
{

    // variables
    int num1, num2, opcion;
    double dividir;

    do
    {

        // solicitar numeros
        cout << "Ingrese el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
        cout << endl;

        // Mostrar opciones
        cout << "Seleccione una opcion: " << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restrar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir del programa" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cout << endl;

        // Realizar operacion
        switch (opcion)
        {
        case 1:
            cout << "Resultado: " << num1 + num2 << endl;
            cout << endl;
            break;
        case 2:
            cout << "Resultado: " << num1 - num2 << endl;
            cout << endl;
            break;
        case 3:
            cout << "Resultado: " << num1 * num2 << endl;
            cout << endl;
            break;
        case 4:
            if (num2 != 0)
            {
                dividir = num1 / num2;
                cout << "Resultado: " << dividir << endl;
                cout << endl;
            }
            else
            {
                cout << "Error: No se puede dividir por cero. \n"
                     << endl;
            }
            break;
        case 5:
            cout << "Saliendo del programa" << endl;
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo. \n"
                 << endl;
        }

    } while (opcion != 5);

    return 0;
}
