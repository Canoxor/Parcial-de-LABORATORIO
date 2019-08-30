#ifndef FUNCIONES_2_H_INCLUDED
#define FUNCIONES_2_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <clocale>
#include <string>

/// ----------------------MENU----------------------------------

int menu_t (){
    int opcion;
    cout << "\n MEN� PRINCIPAL" << endl;
    cout << " --------------" << endl;
    cout << " 1) PACIENTES" <<endl;
    cout << " 2) M�DICOS" <<endl;
    cout << " 3) CONTROLES" <<endl;
    cout << " 4) REPORTES" <<endl;
    cout << " 5) CONFIGURACION" <<endl;
    cout << " ---------------------" <<endl;
    cout << " 0) SALIR DEL PROGRAMA" <<endl;

    cout << "\n Opcion: ";
    cin >> opcion;
    return opcion;
}

int menu_p (){
    int opcion;
    cout << "\n MEN� PACIENTES" << endl;
    cout << " -------------------" << endl;
    cout << " 1) NUEVO PACIENTE" <<endl;
    cout << " 2) MODIFICAR PACIENTE" <<endl;
    cout << " 3) LISTAR PACIENTE POR DNI" <<endl;
    cout << " 4) LISTAR TODOS LOS PACIENTES" <<endl;
    cout << " 5) ELIMINAR PACIENTE" <<endl;
    cout << " ---------------------------------" <<endl;
    cout << " 0) VOLVER AL MENU PRINCIPAL" <<endl;

    cout << "\n Opcion: ";
    cin >> opcion;
    return opcion;
}

int menu_m (){
    int opcion;
    cout << "\n MEN� PACIENTES" << endl;
    cout << " -------------------------------------" << endl;
    cout << " 1) NUEVO M�DICO" <<endl;
    cout << " 2) MODIFICAR M�DICO" <<endl;
    cout << " 3) LISTAR TODOS LOS M�DICOS" <<endl;
    cout << " 4) LISTAR M�DICO POR NRO DE MATR�CULA" <<endl;
    cout << " -------------------------------------" <<endl;
    cout << " 0) VOLVER AL MENU PRINCIPAL" <<endl;

    cout << "\n Opcion: ";
    cin >> opcion;
    return opcion;
}

/// -------------------------------STRUCT----------------------

struct Articulo CargarArt(){
    Articulo a;

    cout << "\n CODIGO: ";
    cin >> a.codigo;
    cout << "\n DESCRIPCION: ";
    cin.ignore();
    cin.getline(a.descripcion, 30);
    cout << "\n PRECIO: $";
    cin >> a.precio;
    cout << "\n STOCK: ";
    cin >> a.stock;

    return a;

}

void MostrarArt(struct Articulo a){


    cout << "\n CODIGO: ";
    cout << a.codigo;
    cout << "\n DESCRIPCION: ";
    cout << a.descripcion;
    cout << "\n PRECIO: $";
    cout << a.precio;
    cout << "\n STOCK: ";
    cout << a.stock;


}


#endif // FUNCIONES_2_H_INCLUDED
