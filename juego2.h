#ifndef JUEGO2_H_INCLUDED
#define JUEGO2_H_INCLUDED
#include"TestDados.h"
#include"Funciones.h"
int juego2 (int& puntaje, char* nombre, int& Tiradatot){
/////////DADOS
    int cantdado=5;
    int dado[5];
/////////PUNTOS
    int jugada = 0,puntuno = -1,puntdos = -1,punttres = -1,puntcuatro = -1,puntcinco = -1,puntseis = -1,escalera = -1,full = -1,poker = -1,generala = -1;
    int controndas=0,Tirada=0,Ronda=0,acutirada=0 ,turnos;
    char cambio;
    cout<<"INGRESE SU NOMBRE DE JUGADOR"<<endl;
    cin>>nombre;
    cout<<"ingrese la cantidad de turnos"<<endl;
    cin>>turnos;

    for(int i=0; i<turnos; i++)
    {
    puntaje=0;
    if(puntuno != -1){
      puntaje+=puntuno;
    }
    if(puntdos != -1){
        puntaje+=puntdos;
    }
    if(punttres != -1){
        puntaje+=punttres;
    }
    if(puntcuatro != -1){
        puntaje+=puntcuatro;
    }
    if(puntcinco != -1){
        puntaje+=puntcinco;
    }
    if(puntseis != -1){
        puntaje+=puntseis;
    }
    if(escalera != -1){
        puntaje+=escalera;
    }
    if(full != -1){
        puntaje+=full;
    }
    if( poker != -1){
        puntaje+=poker;
    }
    if(generala != -1){
        puntaje+=generala;
    }
            system("cls");
            Tirada++;
            acutirada++;
            Ronda++;
            cout<< "TURNO DE "<<nombre<< " |  RONDA NRO "<< Ronda << " |   PUNTAJE TOTAL: "<<puntaje <<" PUNTOS"<<endl;
            cout<< "---------------------------------------------------------------------------------------------";
            cout<< endl;
            cout<< "TIRADA NRO "<<Tirada<< " - TIRADAS TOTALES:  "<<acutirada<<endl;
            cout<< "---------------------------------------------------------------------------------------------";
            cout<< endl;
       for (int j=0;j<5 ;j++ ){
            cout<<"Ingrese el valor del dado "<<j+1<<":"<<endl;
            cin>>dado[j];
            while(!(dado[j]>0&&dado[j]<7)){
                cout<<"Valor de dado Inexistente, por favor ingrese un numero del 1 al 6: "<<endl;
                cin>>dado[j];
                }
            }
            system("cls");
            cout<< "TURNO DE "<<nombre<< " |  RONDA NRO "<< Ronda << " |   PUNTAJE TOTAL: "<<puntaje <<" PUNTOS"<<endl;
            cout<< "---------------------------------------------------------------------------------------------";
            cout<< endl;
            cout<< "TIRADA NRO "<<Tirada<< " - TIRADAS TOTALES:  "<<acutirada<<endl;
            cout<< "---------------------------------------------------------------------------------------------";
            cout<< endl;
       MenuDeDados(dado);
            cout << "\n" << "\n" <<endl;

        while(controndas<2)
        {
            cout<<endl<<"desea cambiar algun dado(S/N)? ";
            cin>>cambio;
            if((cambio=='S')||(cambio=='s'))
            {
                acutirada++;
                sustituirMA(dado);
                system("cls");
                cout<< "TURNO DE "<<nombre<< " |  RONDA NRO "<< Ronda << " |   PUNTAJE TOTAL: "<<puntaje <<" PUNTOS"<<endl;
                cout<< "---------------------------------------------------------------------------------------------";
                cout<< endl;
                cout<< "TIRADA NRO "<<Tirada<< " - TIRADAS TOTALES:  "<<acutirada<<endl;
                cout<< "---------------------------------------------------------------------------------------------";
                cout<< endl;
                MenuDeDados(dado);
                cout << "\n" << "\n" <<endl;
            }else{
                acutirada++;
                controndas = 3;
                system("cls");
                cout<< "TURNO DE "<<nombre<< " |  RONDA NRO "<< Ronda << " |   PUNTAJE TOTAL: "<<puntaje <<" PUNTOS"<<endl;
                cout<< "---------------------------------------------------------------------------------------------";
                cout<< endl;
                cout<< "TIRADA NRO "<<Tirada<< " - TIRADAS TOTALES: "<<acutirada<<endl;
                cout<< "---------------------------------------------------------------------------------------------";
                cout<< endl;
                MenuDeDados(dado);
            }
            cout<<endl<<endl<<endl;
            cout<<"las conbinaciones disponibles son: ";
            controndas++;
            DectectarCuandoDado( dado,cantdado,puntuno,puntdos,punttres,puntcuatro,puntcinco,puntseis,jugada);
            mostrarjugada(dado,cantdado,escalera,full,poker,generala,jugada,turnos);
        }

        cout<<endl<<"Eliga el numero de la combinacion que quiere: ";cin>>jugada;

        DectectarCuandoDado( dado,cantdado,puntuno,puntdos,punttres,puntcuatro,puntcinco,puntseis,jugada);
        mostrarjugada(dado,cantdado,escalera,full,poker,generala,jugada,turnos);
        controndas = 0;
        jugada = 0;
    }
    if(puntuno == -1){
        puntuno =0 ;
    }
    if(puntdos == -1){
        puntdos= 0;
    }
    if(punttres == -1){
        punttres= 0;
    }
    if(puntcuatro == -1){
        puntcuatro = 0;
    }
    if(puntcinco == -1){
        puntcinco = 0;
    }
    if(puntseis == -1){
        puntseis = 0;
    }
    if(escalera == -1){
        escalera = 0;
    }
    if(full == -1){
        full = 0;
    }
    if( poker == -1){
        poker = 0;
    }
    if(generala == -1){
        generala = 0;
    }
    rlutil::anykey();
    puntaje =puntuno+puntdos+punttres+puntcuatro+puntcinco+puntseis+full+poker+escalera+generala;
    Tiradatot=acutirada;
    system("cls");
    fin();
    locate(46, 9); cout <<nombre << endl;
    locate(46, 10); cout<<"TIRADAS TOTALES: "<<acutirada<< endl;
    locate(46, 11); cout<<"EL PUNTAJE FINAL ES: "<<puntaje<<endl;
    cout<<endl;
    locate(44, 13);system("pause");
}


#endif // JUEGO2_H_INCLUDED
