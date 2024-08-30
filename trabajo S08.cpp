#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int num, total;

    cout << "Ingrese el numero: ";
    cin >> num;
    cout << endl;

    // calculos

    for(int i = 1; i <= 10; i++){
        total += pow(num,i);
        cout << num << " elevada a " << i << " = " << pow(num,i)<<endl;
        cout << endl;
    }
    cout << "La suma de las pontencia realizadas es: " << total << endl;

    return 0;
}
