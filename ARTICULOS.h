#ifndef ARTICULOS_H_INCLUDED
#define ARTICULOS_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <clocale>

struct Articulo {
    int codigo;
    char descripcion[30];
    float precio;
    int stock;
    };

struct fecha{
    int dia;
    int mes;
    int anio;
    };

struct paciente{
    int dni;
    char apellidos[50];
    char nombres[50];
    char genero;
    fecha nacimiento;
    /// llamarla con fecha.nacimiento.(campo)
    int obrasocial;
    bool estado;
    };

struct medico{
    int nromatricula;
    char apellidos[50];
    char nombres[50];
    int especialidad;
    float sueldo;
    };


#endif // ARTICULOS_H_INCLUDED
