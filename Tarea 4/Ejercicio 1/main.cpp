#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, resultado;

    cout << "Ingrese el primer numero entero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;

    cout << "Ingrese el tercer numero entero: ";
    cin >> num3;

    resultado = num1 * 2 + num2 * num2 * num2 + num3 * num3;

    cout << "El resultado de la operacion es: " << resultado << endl;

    return 0;
}
