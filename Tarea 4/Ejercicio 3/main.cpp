#include <iostream>
using namespace std;

int main() {
    int codigoProducto;
    string nombreProducto;
    float precioUnitario, cantidadProductos, montoVenta, descuento, subtotal, impuestoIVA, totalPagar;

    cout << "Ingrese el codigo del producto: ";
    cin >> codigoProducto;

    cin.ignore();

    cout << "Ingrese el nombre del producto: ";
    getline(cin, nombreProducto);

    cout << "Ingrese el precio unitario del producto: ";
    cin >> precioUnitario;

    cout << "Ingrese la cantidad de productos facturados: ";
    cin >> cantidadProductos;

    montoVenta = precioUnitario * cantidadProductos;
    descuento = montoVenta * 0.05;
    subtotal = montoVenta - descuento;
    impuestoIVA = subtotal * 0.13;
    totalPagar = subtotal + impuestoIVA;

    cout << "\nDatos de la factura:" << endl;
    cout << "Código de producto: " << codigoProducto << endl;
    cout << "Nombre del producto: " << nombreProducto << endl;
    cout << "Precio unitario: " << precioUnitario << endl;
    cout << "Cantidad de productos: " << cantidadProductos << endl;
    cout << "Monto de la venta: " << montoVenta << endl;
    cout << "Descuento: " << descuento << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Impuesto IVA: " << impuestoIVA << endl;
    cout << "Total a pagar: " << totalPagar << endl;

    return 0;
}
