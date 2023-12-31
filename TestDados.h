#ifndef TESTDADOS_H_INCLUDED
#define TESTDADOS_H_INCLUDED
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "rlutil.h"
#include <dos.h>

using namespace std;
using namespace rlutil;
#define ABAJO 80
#define ARRIBA 72
#define ENTER 13

void cargarVector(int v[], int tam) {
int i;
for (i=0;i<tam;i++){
    cout << "Ingrese un numero:  "<<endl;
    cin >> v[i];
    }
}

void cargarAleatorio(int v[], int tam, int limite){ // Carga el vector con numeros aleatorios
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
  }
}

void mostrarVector(int v[], int tam){ // muestra el valor de los dados
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<endl;
    }
}

void contarRepetidos(int v[],int tam,int contar[]){
int i,x,contador=0;
for(i=0;i<tam;i++){
    for(x=0;x<tam;x++){
        if(v[i]==v[x]){contador++;}
    }
   contar[i]=contador;
   contador=0;
    }
}

//FUNCIONES PARA EL MENU

void tituloAnimado() {

    int xcol;
    // primera linea
    setColor(WHITE);
    locate(42, 2); printf("%c", 201);
    locate(42, 3); printf("%c", 186);
    locate(42, 4); printf("%c", 200);


    for (xcol = 43; xcol <= 80; xcol++) {

        locate(xcol, 2); printf("%c", 205);
        locate(xcol, 4); printf("%c", 205);

        Sleep(3);
    }

    locate(80, 2); printf("%c", 187);
    locate(80, 3); printf("%c", 186);
    locate(80, 4); printf("%c", 188);

    //SEGUNDA LINEA

    char vtitulo[] = "  BIENVENIDO AL MENU DE LA GENERALA  ";
    int vlongitud;
    vlongitud = strlen(vtitulo);
    int vcentro = (((80 - vlongitud) / 2) + 1);

    for (xcol = 43; xcol <= vcentro; xcol++) {
    }
        locate(xcol, 3); printf(vtitulo);
    }

int MenuPrincipalGenerala() {
    int x = 50, y = 9;
    tituloAnimado();
    setBackgroundColor(BLUE);
    setColor(WHITE);
    locate(47, 8); cout << endl;
    locate(47, 9); cout << "    1- JUEGO DE 1 ALEATORIO " << endl;
    locate(47, 10); cout << "    2- JUEGO DE 1 MANUAL    " << endl;
    locate(47, 11); cout << "    3- PUNTAJE MAS ALTO     " << endl;
    locate(47, 12); cout <<"    4- SALIR                " << endl;
    locate(x, y); printf("*"); //a partir de aca es para utilizar las flechas del teclado
    bool elegir = false;
    while (!elegir) {
        if (_kbhit()) {
            locate(x, y); printf(" ");
            char tecla = _getch();
            if (tecla == ENTER) { elegir = true; return y; }
            if (tecla == ARRIBA && y > 9) locate(x, y--);
            if (tecla == ABAJO && y < 12) locate(x, y++);
            locate(x, y); printf("*");
        }
    }
}
void fin() { // la funcion que dibuja el recuadro final

    // HORIZONTAL
    for (int i = 44; i < 71; i++) {
        locate(i, 8); printf("%c", 205);
        locate(i, 12); printf("%c", 205);
    }
    // VERTICAL
    for (int i = 9; i < 12; i++) {
        locate(44, i); printf("%c", 186);
        locate(71, i); printf("%c", 186);
    }
    ///ESQUINAS
    locate(44, 8); printf("%c", 201);
    locate(44, 12); printf("%c", 200);
    locate(71, 8); printf("%c", 187);
    locate(71, 12); printf("%c", 188);
}
void recuadro() { // la funcion que dibuja el recuadro final

    // HORIZONTAL
    for (int i = 40; i < 81; i++) {
        locate(i, 8); printf("%c", 205);
        locate(i, 17); printf("%c", 205);
    }
    // VERTICAL
    for (int i = 9; i < 18; i++) {
        locate(40, i); printf("%c", 186);
        locate(81, i); printf("%c", 186);
    }
    ///ESQUINAS
    locate(40, 8); printf("%c", 201);
    locate(40, 17); printf("%c", 200);
    locate(81, 8); printf("%c", 187);
    locate(81, 17); printf("%c", 188);
}
void dadouno() { // la funcion que dibuja al dado en la primera posicion

    // HORIZONTAL
    for (int i = 2; i < 10; i++) {
        locate(i, 5); printf("%c", 205);
        locate(i, 9); printf("%c", 205);
    }
    // VERTICAL
    for (int i = 6; i < 9; i++) {
        locate(2, i); printf("%c", 186);
        locate(10, i); printf("%c", 186);
    }
    ///ESQUINAS
    locate(2, 5); printf("%c", 201);
    locate(2, 9); printf("%c", 200);
    locate(10, 5); printf("%c", 187);
    locate(10, 9); printf("%c", 188);
}

void dadoDos() {// la funcion que dibuja al dado en la segunda posicion

    // HORIZONTAL
    for (int i = 13; i < 20; i++) {
        locate(i, 5); printf("%c", 205);
        locate(i, 9); printf("%c", 205);
    }
    // VERTICAL
    for (int i = 6; i < 9; i++) {
        locate(12, i); printf("%c", 186);
        locate(20, i); printf("%c", 186);
    }
    //ESQUINAS
    locate(12, 5); printf("%c", 201);
    locate(12, 9); printf("%c", 200);
    locate(20, 5); printf("%c", 187);
    locate(20, 9); printf("%c", 188);
}

void dadoTres() {// la funcion que dibuja al dado en la tercera posicion

    // HORIZONTAL
    for (int i = 23; i < 30; i++) {
        locate(i, 5); printf("%c", 205);
        locate(i, 9); printf("%c", 205);
    }
    // VERTICAL
    for (int i = 6; i < 9; i++) {
        locate(22, i); printf("%c", 186);
        locate(30, i); printf("%c", 186);
    }
    //ESQUINAS
    locate(22, 5); printf("%c", 201);
    locate(22, 9); printf("%c", 200);
    locate(30, 5); printf("%c", 187);
    locate(30, 9); printf("%c", 188);
}

void dadoCuatro() {// la funcion que dibuja al dado en la cuarta posicion

    // HORIZONTAL
    for (int i = 32; i < 40; i++) {
        locate(i, 5); printf("%c", 205);
        locate(i, 9); printf("%c", 205);
    }
    // VERTICAL
    for (int i = 6; i < 9; i++) {
        locate(32, i); printf("%c", 186);
        locate(40, i); printf("%c", 186);
    }
    //ESQUINAS
    locate(32, 5); printf("%c", 201);
    locate(32, 9); printf("%c", 200);
    locate(40, 5); printf("%c", 187);
    locate(40, 9); printf("%c", 188);
}

void dadoCinco() {// la funcion que dibuja al dado en la quinta posicion

    // HORIZONTAL
    for (int i = 42; i < 50; i++) {
        locate(i, 5); printf("%c", 205);
        locate(i, 9); printf("%c", 205);
    }
    // VERTICAL
    for (int i = 6; i < 9; i++) {
        locate(42, i); printf("%c", 186);
        locate(50, i); printf("%c", 186);
    }
    //ESQUINAS
    locate(42, 5); printf("%c", 201);
    locate(42, 9); printf("%c", 200);
    locate(50, 5); printf("%c", 187);
    locate(50, 9); printf("%c", 188);
}

//La idea de esta funcion es dependiendo de el valor de i,mostrar el dado
void MenuDeDados(int dado[]) {    // dibujalos dados respecto a los valores que se le entreguen en las distintas posiciones
    int i;
    dadouno(); dadoDos(); dadoTres(); dadoCuatro(); dadoCinco();
    for (i = 0; i <5; i++) {
        switch (dado[i]) {
        /*dado 1*/ case 1:
            if (i == 0) { locate(6, 7); printf("%c", 254); }
            if (i == 1) { locate(16, 7); printf("%c", 254); }
            if (i == 2) { locate(26, 7); printf("%c", 254); }
            if (i == 3) { locate(36, 7); printf("%c", 254); }
            if (i == 4) { locate(46, 7); printf("%c", 254); }

            ; break;

        /*dado 2*/ case 2:
            if (i == 0) {
                locate(4, 6); printf("%c", 254);
                locate(8, 8); printf("%c", 254);
            }

            if (i == 1) {
                locate(14, 6); printf("%c", 254);
                locate(18, 8); printf("%c", 254);
            }
            if (i == 2) {
                locate(24, 6); printf("%c", 254);
                locate(28, 8); printf("%c", 254);
            }
            if (i == 3) {
                locate(34, 6); printf("%c", 254);
                locate(38, 8); printf("%c", 254);
            }
            if (i == 4) {
                locate(44, 6); printf("%c", 254);
                locate(48, 8); printf("%c", 254);
            }

            ; break;
        /*dado 3*/  case 3:
            if (i == 0) {
                locate(6, 7); printf("%c", 254);
                locate(8, 6); printf("%c", 254);
                locate(4, 8); printf("%c", 254);
            }

            if (i == 1) {
                locate(16, 7); printf("%c", 254);
                locate(18, 6); printf("%c", 254);
                locate(14, 8); printf("%c", 254);
            }

            if (i == 2) {
                locate(26, 7); printf("%c", 254);
                locate(28, 6); printf("%c", 254);
                locate(24, 8); printf("%c", 254);
            }

            if (i == 3) {
                locate(36, 7); printf("%c", 254);
                locate(38, 6); printf("%c", 254);
                locate(34, 8); printf("%c", 254);
            }

            if (i == 4) {
                locate(46, 7); printf("%c", 254);
                locate(48, 6); printf("%c", 254);
                locate(44, 8); printf("%c", 254);
            }

            ; break;

        /*dado 4*/ case 4:
            if (i == 0) {
                locate(4, 6); printf("%c", 254);
                locate(4, 8); printf("%c", 254);
                locate(8, 6); printf("%c", 254);
                locate(8, 8); printf("%c", 254);
            }

            if (i == 1) {
                locate(14, 6); printf("%c", 254);
                locate(14, 8); printf("%c", 254);
                locate(18, 6); printf("%c", 254);
                locate(18, 8); printf("%c", 254);
            }

            if (i == 2)

            {
                locate(24, 6); printf("%c", 254);
                locate(24, 8); printf("%c", 254);
                locate(28, 6); printf("%c", 254);
                locate(28, 8); printf("%c", 254);
            }


            if (i == 3)

            {
                locate(34, 6); printf("%c", 254);
                locate(34, 8); printf("%c", 254);
                locate(38, 6); printf("%c", 254);
                locate(38, 8); printf("%c", 254);
            }
            if (i == 4) {
                locate(44, 6); printf("%c", 254);
                locate(44, 8); printf("%c", 254);
                locate(48, 6); printf("%c", 254);
                locate(48, 8); printf("%c", 254);
            }

            break;

        /*dado 5*/ case 5:
            if (i == 0)
            {
                locate(4, 6); printf("%c", 254);
                locate(4, 8); printf("%c", 254);
                locate(8, 6); printf("%c", 254);
                locate(6, 7); printf("%c", 254);
                locate(8, 8); printf("%c", 254);
            }
            if (i == 1)
            {
                locate(14, 6); printf("%c", 254);
                locate(14, 8); printf("%c", 254);
                locate(18, 6); printf("%c", 254);
                locate(16, 7); printf("%c", 254);
                locate(18, 8); printf("%c", 254);
            }
            if (i == 2)
            {
                locate(24, 6); printf("%c", 254);
                locate(24, 8); printf("%c", 254);
                locate(28, 6); printf("%c", 254);
                locate(26, 7); printf("%c", 254);
                locate(28, 8); printf("%c", 254);
            }
            if (i == 3) {
                locate(34, 6); printf("%c", 254);
                locate(34, 8); printf("%c", 254);
                locate(38, 6); printf("%c", 254);
                locate(36, 7); printf("%c", 254);
                locate(38, 8); printf("%c", 254);
            }
            if (i == 4)
            {
                locate(44, 6); printf("%c", 254);
                locate(44, 8); printf("%c", 254);
                locate(48, 6); printf("%c", 254);
                locate(46, 7); printf("%c", 254);
                locate(48, 8); printf("%c", 254);
            }

            break;

        /*dado 6*/  case 6:
            if (i == 0) {
                locate(4, 6); printf("%c", 254);
                locate(4, 8); printf("%c", 254);
                locate(8, 6); printf("%c", 254);
                locate(4, 7); printf("%c", 254);
                locate(8, 7); printf("%c", 254);
                locate(8, 8); printf("%c", 254);
            }
            if (i == 1) {
                locate(14, 6); printf("%c", 254);
                locate(14, 8); printf("%c", 254);
                locate(18, 6); printf("%c", 254);
                locate(14, 7); printf("%c", 254);
                locate(18, 7); printf("%c", 254);
                locate(18, 8); printf("%c", 254);
            }
            if (i == 2) {
                locate(24, 6); printf("%c", 254);
                locate(24, 8); printf("%c", 254);
                locate(28, 6); printf("%c", 254);
                locate(24, 7); printf("%c", 254);
                locate(28, 7); printf("%c", 254);
                locate(28, 8); printf("%c", 254);
            }
            if (i == 3) {
                locate(34, 6); printf("%c", 254);
                locate(34, 8); printf("%c", 254);
                locate(38, 6); printf("%c", 254);
                locate(34, 7); printf("%c", 254);
                locate(38, 7); printf("%c", 254);
                locate(38, 8); printf("%c", 254);
            }
            if (i == 4) {
                locate(44, 6); printf("%c", 254);
                locate(44, 8); printf("%c", 254);
                locate(48, 6); printf("%c", 254);
                locate(44, 7); printf("%c", 254);
                locate(48, 7); printf("%c", 254);
                locate(48, 8); printf("%c", 254);
            }
            break;
        }
    }
}


#endif // TESTDADOS_H_INCLUDED
