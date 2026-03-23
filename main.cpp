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
    // Declarar arreglos hasta 50 elementos
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
        // Validacion del rango de opciones
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

    } while (opcion != 4); //Fin

    return 0;
}

void registrarProducto(string nombres[], int cantidades[], float precios[], int &contador) {
    
    char continuar = 's';
    // El bucle sigue si el usuario desea (s) y hay espacio (menor a 50)
    // Se usa el operador lógico && para validar ambas condiciones
    while ((continuar == 's' || continuar == 'S') && contador < 50) {
        
        cout << "\nRegistro " << contador + 1 << " de 50" << endl;
        cout << "Nombre: ";
        cin >> nombres[contador];
        cout << "Cantidad: ";
        cin >> cantidades[contador];
        cout << "Precio: ";
        cin >> precios[contador];
        // Validación de datos: No se permiten negativos o precio cero
        if (cantidades[contador] < 0 || precios[contador] <= 0) {
            cout << "Datos invalidos. No se guardo." << endl;
        } else {
            contador++;// Solo aumentamos el contador si los datos son válidos
            cout << "Guardado." << endl;
        }
        // Desición si preguntamos por mas productos
        if (contador < 50) {
            cout << "Agregar otro? (s/n): ";
            cin >> continuar;
        } else {
            cout << "*LIMITE DE 50 ALCANZADO*. Volviendo al menu..." << endl;
        }
    } 
}

void mostrarInventario(string nombres[], int cantidades[], float precios[], int contador) {
    // Verificamos si hay datos
    if (contador > 0) {
        cout << "\n=== LISTADO ===" << endl;
        for (int i = 0; i < contador; i++) {
            cout << i + 1 << ". " << nombres[i] << " | Stock: " << cantidades[i] << " | $" << precios[i] << endl;
        }
    } else {
        cout << "No hay productos para mostrar." << endl;
    }
}

void subMenuReportes(string nombres[], int cantidades[], float precios[], int contador) {
    if (contador > 0) {
    int subOpcion;
    cout << "\n/*/*/ SUBMENU /*/*/" << endl;
    cout << "===================" << endl;
    cout << "1. Valor Total del Inventario" << endl;
    cout << "2. Buscar Producto por Nombre" << endl;
    cout << "3. Volver" << endl;
    cout << "Seleccione: ";
    cin >> subOpcion;
    // Validacion rango SUBMENU
    while (subOpcion < 1 || subOpcion > 3) {
            cout << "Opcion invalida (1-3): ";
            cin >> subOpcion;
        }

    if (subOpcion == 1) {
        float suma = 0;
        for (int i = 0; i < contador; i++) {
            suma += (cantidades[i] * precios[i]);
        }
        cout << "Inversion total: $" << suma << endl;
    } else if (subOpcion == 2) {
        buscarProducto(nombres, cantidades, precios, contador); 
    }
    // Si la opcion es 3, el bucle termina y la funcion finaliza sola regresando al main
    } else {
        cout << "Debe registrar productos primero." << endl;
}
}

