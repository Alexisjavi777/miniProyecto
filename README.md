# Sistema de Gestión de Inventario - Bootcamp C++

## Descripción
Este proyecto consiste en una aplicación desarrollada en C++ diseñada para la administración eficiente de productos. El sistema permite el almacenamiento de datos en arreglos, gestionando nombres, stock y precios de venta de forma estructurada.

## Objetivo
El software busca resolver la necesidad de un control de mercancía digital mediante la automatización del registro de productos, la prevención de errores de usuario mediante validaciones lógicas, asi como también el cálculo automático de la inversión total del negocio y La localización rápida de artículos.

## Contenido / Funcionalidades
El proyecto se divide en módulos funcionales que aplican los conceptos vistos en el bootcamp:

### Módulo de Registro
Permite la carga continua de productos (bucle `while`) con un límite máximo de 50 elementos.

### Módulo de Visualización
Muestra el listado completo de productos recorriendo los arreglos de forma secuencial.

### Módulo de Reportes (Submenú)
Calcula la suma total del valor del inventario (`Cantidad * Precio`).

### Módulo de Búsqueda
Localiza un producto por su nombre e indica su posición (índice) dentro del arreglo, utilizando una bandera booleana (`bool flag`).

### Validaciones Avanzadas
Control de opciones de menú (1-4) y submenú (1-3) mediante operadores lógicos (`||` y `&&`).

## Estructura
Este proyecto contiene los siguientes elementos:

- main.cpp
- main.exe
- README.md

El repositorio está organizado bajo programación modular:

- **Funciones:** Declaración inicial de las herramientas del sistema.
- **Main:** Función principal que contiene el menú principal.
- **Desarrollo de las Funciones Independientes:** Cada tarea (registro, búsqueda, reportes) reside en su propia función para facilitar la depuración y el mantenimiento del código.

## Herramientas utilizadas
- **Lenguaje:** C++.
- **Entorno:** Visual Studio Code.
- **Control de Versiones:** Git y GitHub para el seguimiento de cambios.

## Autor
Proyecto desarrollado por: **Alexis Liquinchana**. Estudiante del Bootcamp *"Programación de Cero a POO"*

## Observaciones
- El sistema incluye protección contra datos negativos en los campos de cantidad y precio.
- Se ha optimizado el uso de memoria utilizando el contador de productos para evitar procesar espacios vacíos en los arreglos.
