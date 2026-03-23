/*
MINI PROYECTO C++
Autor: Alexis Liquinchana
Fecha: 2026/03/23
*/

#include <iostream>
#include <string>

using namespace std;

void registrarProducto(string nombres[], int cantidades[], float precios[], int &contador);
void mostrarInventario(string nombres[], int cantidades[], float precios[], int contador);
void subMenuReportes(string nombres[], int cantidades[], float precios[], int contador);
void buscarProducto(string nombres[], int cantidades[], float precios[], int contador);


int main() {
    string nombres[50];
    int cantidades[50];
    float precios[50];
    int contador = 0;
    int opcion;

    do {
        cout << "\n/*/*/*/ SISTEMA DE INVENTARIO /*/*/*/" << endl;
        cout << "=====================================" << endl;
        cout << "1. Registrar Productos" << endl;
        cout << "2. Mostrar Inventario" << endl;
        cout << "3. Reportes y Busqueda (SUBMENU)" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione: ";
        cin >> opcion;

        while (opcion < 1 || opcion > 4) {
            cout << "Opcion invalida (1-4): ";
            cin >> opcion;
        }

        if (opcion == 1) {
            registrarProducto(nombres, cantidades, precios, contador);
        } else if (opcion == 2) {
            mostrarInventario(nombres, cantidades, precios, contador);
        } else if (opcion == 3) {
            subMenuReportes(nombres, cantidades, precios, contador);
        }

    } while (opcion != 4);

    return 0;
}



