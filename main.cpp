#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
#include "TestDados.h"
#include "rlutil.h"
#include "juego1.h"
#include "juego2.h"
using namespace rlutil;

int main()
{
    int casos,puntaje;
    char nombre[30]={'\0'};
    int cont1=0, maypunt=0,Tirada=0;
    bool cicloinfinito = true;

    while (cicloinfinito)
    {
        setBackgroundColor(CYAN);
        casos = MenuPrincipalGenerala(); //LLamamos al menu Principal
        switch (casos)
        {
        ///////////////////////////////////////////////////// JUEGO ALEATORIO
        case 9:
            system("cls");
            juego1(puntaje,nombre,Tirada);
        break;
        ///////////////////////////////////////////////////// JUEGO MANUAL
        case 10:
            system("cls");
            juego2(puntaje,nombre,Tirada);
            break;
        ///////////////////////////////////////////////////// PUNTAJE
        case 11:
            system("cls");
            if(puntaje!=0){
                recuadro();
                locate(45,11); cout<< nombre<<endl;
                locate(45,12); cout<< "TIRADAS TOTALES: "<<Tirada;
                locate(45,13); cout<<"EL PUNTAJE MAS ALTO ES: ";
                tot_puntaje(puntaje,cont1,maypunt);
            }else{
                recuadro();
                locate(42,12); cout<<"LA BASE DE DATOS NO A SIDO ACTUALIZADA "<<endl;
            }
            locate(40,20); system("pause");
        break;
        ///////////////////////////////////////////////////// SALIR
        case 12:
            system("cls");
            locate(43, 4); cout<< "GRACIAS POR JUGAR NUESTRO JUEGO <3"<<endl<<endl<<endl;
            locate(40, 5); cout<<"NO ES PERFECTO, PERO TIENE AMOR Y CAFFE <3"<<endl<<endl<<endl;
            locate(1, 8); cout<< "CREADORES: Juan Manuel Fernandez y Juan Rios"<<endl;
            exit(0);
        break;

}
system("cls");
}
system("pause");
return 0;
}
