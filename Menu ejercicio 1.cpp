#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
/*
 Quinteros Peralta Rodrigo Ervin 18200316
 Suarez Palomino Jean Paul 18200296
 Caballero Leon Fredi Alexander 18200076
 Sambrano Hinojo Alexis Romualdo 18200319
*/
void menu();

using namespace std;
int main(){

    char opc;
    float sueldo, sueldoTotal=0;
    int i=0;
    float b=0,c=0;
    float bporcentaje, cporcentaje;
    int opcion;
    int nTrab;
    do{
        menu();
        cin>> opcion;
        cout << endl << endl;
        switch(opcion){
            case 1:
                cout<<"Ingrese el numero de trabajadores:";
                cin>>nTrab;
                while(i<nTrab){
                printf("Ingrese el nombre del trabajador (%d): ",i+1);
                cin>>opc;
                do{
                    printf("Ingrese sueldo del trabajador (%d): ",i+1);
                    scanf("%f",&sueldo);
                }while(sueldo<1000 || sueldo>2000);
                if(sueldo>1000&&sueldo<1500){
                    c++;
                    sueldoTotal=sueldoTotal+sueldo;
                }
                else{
                    b++;
                    sueldoTotal=sueldoTotal+sueldo;
                }
                printf("\n");
                i++;
                }
                cout << endl << endl;
                break;
            case 2:
                cporcentaje=c*100/nTrab;
                bporcentaje=b*100/nTrab;
                printf("El porcentaje entre 1000 a 1500 :%.1f\n", cporcentaje);
                printf("El porcentaje entre 1500 a 2000 :%.1f\n", bporcentaje);
                 cout << endl << endl;
                break;
            case 3:
                printf("El sueldo total es : %.1f \n", sueldoTotal);
                cout << endl << endl;
                break;
            case 4:
                break;
            default:
                cout<< "ERROR.... !!!";
        }
    }while(opcion!=4);

    system ("pause ");
    return 0;
}

void menu(){
    cout <<"\t\tMenu"<< endl;
    cout << "1. Ingresar datos del trabajador  "<< endl;
    cout << "2. Calcular el porcentaje  "<< endl;
    cout << "3. Calcular el pago total "<< endl<< endl;
    cout << "4. Salir ";
    cout << endl << endl;
    cout << "Ingrese la opcion: ";
}

