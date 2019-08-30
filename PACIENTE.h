#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <clocale>
#include <string.h>

/// --------------------------- DNI ---------------------------------
int CargarP_dni(){

    bool cargado=false;
    int dni;

    while (cargado!=true){
        cout << "\n DNI : ";
        cin >> dni;

        if (dni > 0)
            cargado=true;
        else {
            cout << "\n <ERROR> NÚMERO DE DIA INVALIDO " <<endl;
            cout << " FAVOR DE INGRESAR EL CAMPO NUEVAMENTE. " <<endl;
            system("pause");
            system("cls");
        }
    }
}

/// --------------------------- GENERO ---------------------------------
char CargarP_genero(){
    char genero;
    bool cargado;

    while (cargado!=true){
        cout << "\n GENERO : ";
        cin >> genero;

        if (genero!='M' && genero!='F' && genero!='O'){
            cout << "\n <ERROR> SOLO SE ADMITEN LOS CARACTERES: M - F - O " <<endl;
            cout << " FAVOR DE INGRESAR EL CAMPO NUEVAMENTE. ";
            system("pause");
            system("cls");
        }
        else {
            cargado=true;
        }
    }
    return genero;
}

/// --------------------------- FECHA ---------------------------------
struct fecha CargarF(){
    fecha f;
    bool cargado=false;
    cout << "\n INGRESE LA FECHA DE NACIMIENTO ";

    cout <<endl<<endl;
    system("pause");
    system("cls");

    /// --------------------------- DIA
    while(cargado!=true){
    cout << "\n Día : ";
    cin >> f.dia;

    if (f.dia >= 1 && f.dia <= 31){
        cargado=true;
        }
    else{
        cout << "\n <ERROR> NÚMERO DE DÍA INVALIDO " <<endl;
        cout << " FAVOR DE INGRESAR EL CAMPO NUEVAMENTE. " <<endl;
        system("pause");
        system("cls");
        }
    }
    cargado=false;

    cout <<endl<<endl;
    system("cls");

    /// --------------------------- MES
    while(cargado!=true){
    cout << "\n Mes : ";
    cin >> f.mes;

    if (f.mes >= 1 && f.mes <= 12){
        cargado=true;
        }
    else{
        cout << "\n <ERROR> NÚMERO DE MES INVALIDO " <<endl;
        cout << " FAVOR DE INGRESAR EL CAMPO NUEVAMENTE. " <<endl;
        system("pause");
        system("cls");
        }
    }
    cargado=false;

    cout <<endl;
    system("cls");

    /// --------------------------- AÑO
    while(cargado!=true){
    cout << endl << " Año : ";
    cin >> f.anio;

    if (f.anio < 2020){
        cargado=true;
        }
    else{
        cout << "\n <ERROR> NÚMERO DE AÑO INVALIDO " <<endl;
        cout << " FAVOR DE INGRESAR EL CAMPO NUEVAMENTE. " <<endl;
        system("pause");
        system("cls");
        }
    }
    return f;
}

/// --------------------------- OBRA SOCIAL ---------------------------------
int CargarP_OS(){
    int x;
    bool cargado=false;
    while (cargado!=true){
    cout << "\n OBRA SOCIAL : ";
    cin >> x;

    if (x >= 1 && x <= 50){
        cargado=true;
    }
    else {
        cout << "\n <ERROR> NÚMERO DE OBRA SOCIAL INVALIDO " <<endl;
        cout << " FAVOR DE INGRESAR EL CAMPO NUEVAMENTE. " <<endl;
        system("pause");
        system("cls");
    }
  }
  return x;
}

/// --------------------------- PACIENTE ---------------------------------
struct paciente CargarP(){
    paciente p;
    char cadena[50];

    /// DNI
    p.dni = CargarP_dni();
    cout <<endl<<endl;
    system("pause");
    system("cls");

    /// APELLIDOS
    cout << "\n APELLIDOS : ";
    cin >> p.apellidos;
    cout <<endl<<endl;
    system("pause");
    system("cls");

    /// NOMBRES
    cout << "\n NOMBRES : ";
    cin >> p.apellidos;
    cout <<endl<<endl;
    system("pause");
    system("cls");

    /// GENERO              : ";
    p.genero = CargarP_genero();
    cout <<endl<<endl;
    system("pause");
    system("cls");

    /// NACIMIENTO
    p.nacimiento = CargarF();
    cout <<endl<<endl;
    system("pause");
    system("cls");

    /// OBRA SOCIAL
    p.obrasocial = CargarP_OS();
    system("pause");
    system("cls");

    /// ESTADO
    p.estado = true;

    return p;
    }


#endif // PACIENTE_H_INCLUDED
