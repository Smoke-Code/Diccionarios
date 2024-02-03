#include <iostream>

int lectura();
namespace ConvertirDatos {

    float precio(int p);

    float desc(int p, float monto);

    float comision(int p, float monto);

    float transporte(int p, float monto);

}

float ConvertirDatos::precio(int p) {
    if (p == 1) {
        return 8;
    } else if (p == 2) {
        return 10;
    } else if (p == 3) {
        return 15;
    } else {
        // Si se ingresa una opción inválida, regresamos un valor negativo para indicar un error.
        return -1;
    }
}

float ConvertirDatos::desc(int p, float monto) {
    if (p == 1) {
        return monto * 0.03;
    } else if (p == 2) {
        return monto * 0.05;
    } else if (p == 3) {
        return monto * 0.08;
    } else {
        // Si se ingresa una opción inválida, regresamos un valor negativo para indicar un error.
        return -1;
    }
}

float ConvertirDatos::comision(int p, float monto) {
    if (p == 1) {
        return monto * 0.01;
    } else if (p == 2) {
        return monto * 0.03;
    } else if (p == 3) {
        return monto * 0.015;
    } else {
        // Si se ingresa una opción inválida, regresamos un valor negativo para indicar un error.
        return -1;
    }
}

float ConvertirDatos::transporte(int p, float monto) {
    if (p == 1) {
        return monto + 50;
    } else if (p == 2) {
        return monto + 150;
    } else if (p == 3) {
        return monto + 75;
    } else {
        // Si se ingresa una opción inválida, regresamos un valor negativo para indicar un error.
        return -1;
    }
}
