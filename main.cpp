#include <iostream>
using namespace std;
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <clocale>
#include "ARTICULOS.h"
#include "FUNCIONES_2.h"
#include "PACIENTE.h"
#include "MEDICO.h"


/// ----------------------------------------------------------

int main(){

    setlocale(LC_ALL,"Spanish");
    int op_men, op_pac, op_med;
    bool menu=true, submenu;

    while (menu==true){
    op_men = menu_t();
    system("cls");



switch (op_men){

    case 1:
        submenu=true;
        while(submenu==true){
        op_pac = menu_p();
        system("cls");

        switch (op_pac){

            case 1:
                CargarP();
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 0:
                submenu=false;
                break;
            }
        }
        break;

    case 2:
        submenu=true;
        while(submenu==true){
        op_med = menu_m();
        system("cls");

        switch (op_med){

            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 0:
                submenu=false;
                break;
            }

        }
        break;

    case 3:
        break;

    case 4:
        break;

    case 5:
        break;

    case 0:
        break;


    }
  }
}









