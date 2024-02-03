#include <iostream>
#include "convierteDatos.h"
#include "lecturaDatos.h"
int lectura() {
    int proveedor;
    int producto;
    int cantidad;
    int pago;
    std::string compra;

    std::cout << "Registro de la Empresa de Relojes" << std::endl;
    std::cout << "1-Empresa, 2-Individual" << std::endl;
    std::cin >> proveedor;

    while (proveedor != 1 && proveedor != 2) {
        std::cout << "Opción no válida, ingrese de nuevo" << std::endl;
        std::cout << "1-Empresa, 2-Individual" << std::endl;
        std::cin >> proveedor;
    }

    std::cout << "1-Pulseras / 2-Pared / 3-Escritorios" << std::endl;
    std::cin >> producto;

    while (producto != 1 && producto != 2 && producto != 3) {
        std::cout << "Opción no válida, ingrese de nuevo" << std::endl;
        std::cout << "1-Pulseras / 2-Pared / 3-Escritorios" << std::endl;
        std::cin >> producto;
    }

    std::cout << "Número de productos" << std::endl;
    std::cin >> cantidad;

    std::cout << "1-Efectivo / 2-Yape / 3-Plin" << std::endl;
    std::cin >> pago;

    while (pago != 1 && pago != 2 && pago != 3) {
        std::cout << "Opción no válida, ingrese de nuevo" << std::endl;
        std::cout << "1-Efectivo / 2-Yape / 3-Plin" << std::endl;
        std::cin >> pago;
    }

    std::cout << "M - por Mayor o I - por Individual" << std::endl;
    std::cin >> compra;

    while (compra != "M" && compra != "m" && compra != "I" && compra != "i") {
        std::cout << "Opción no válida, ingrese de nuevo" << std::endl;
        std::cout << "M - por Mayor o I - por Individual" << std::endl;
        std::cin >> compra;
    }

    float pagoT = ConvertirDatos::precio(producto) * cantidad;
    float descuentoT = ConvertirDatos::desc(producto, pagoT);
    float comisionT = ConvertirDatos::comision(producto, pagoT);
    float transporteT = ConvertirDatos::transporte(producto, pagoT);
    float total = pagoT - descuentoT + comisionT + transporteT;

    std::cout << "El pago total sería: " << pagoT << std::endl;
    std::cout << "El descuento total generado es: " << descuentoT << std::endl;
    std::cout << "La comisión total generada es: " << comisionT << std::endl;
    std::cout << "El gasto del transporte total es: " << transporteT << std::endl;
    std::cout << "El monto total sería: " << total << std::endl;

    return 0;
}
