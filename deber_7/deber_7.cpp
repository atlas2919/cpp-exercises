#include <iostream>
#include <cmath>

using namespace std;

// funcion 1

double redondear(double numero, int decimales)
{
    double factor = 1.0;
    for (int i = 0; i < decimales; i++)
    {
        factor *= 10.0;
    }

    numero = numero * factor;

    if (numero > 0)
    {
        int entero = int(numero);
        if (numero - entero >= 0.5)
        {
            entero++;
        }
        numero = double(entero);
    }
    else
    {
        int entero = int(numero);
        if (entero - numero >= 0.5)
        {
            entero--;
        }
        numero = double(entero);
    }

    numero = numero / factor;

    return numero;
}

// ejercicio 2

double factorial(int n)
{
    if (n == 0)
        return 1;
    double result = 1.0;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

double seno(double x, int n)
{
    double resultado = 0.0;
    for (int i = 0; i < n; i++)
    {
        double termino = (pow(-1, i) * pow(x, 2 * i + 1)) / factorial(2 * i + 1);
        resultado += termino;
    }
    return resultado;
}

double coseno(double x, int n)
{
    double resultado = 0.0;
    for (int i = 0; i < n; i++)
    {
        double termino = (pow(-1, i) * pow(x, 2 * i)) / factorial(2 * i);
        resultado += termino;
    }
    return resultado;
}


