#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int puntaje_uno(int dado[],int cantdado);
int puntaje_dos(int dado[],int cantdado);
int puntaje_tres(int dado[],int cantdado);
int puntaje_cuatro(int dado[],int cantdado);
int puntaje_cincos(int dado[],int cantdado);
int puntaje_seis (int dado [], int cantdado);
int sustituir (int dado[]);
int sustituirMA (int dado[]);
void cambiar_un_solo_dado(int dado[], int posNum);
int puntos_escalera(int dado[], int cantdado);
int puntos_full(int dado[],int cantdado);
int puntos_x_poker(int dado[], int cantdado);
int GENERALA (int dado[], int cantdado);
void tot_puntaje(int& puntaje);
////////////////////////////////////////////////////// PUNTOS X CARA DE LOS DADOS
/////////////////////////////////////////////////////////// puntaje de uno
int puntaje_uno(int dado[],int cantdado)
{
    int puntos_uno=0;
    for(int i=0; i<cantdado; i++)
    {
        if(dado[i]==1)
        {
            puntos_uno += dado[i];
        }
    }

    return puntos_uno;

}
////////////////////////////////////////////////////////////puntaje de Nrs_dos.
int puntaje_dos(int dado[],int cantdado)
{
    int punto_dos=0,cont=0;
    for(int i=0; i<cantdado; i++)
    {
        if(dado[i]==2)
        {
            cont++;
        }
    }
    punto_dos = 2*cont;
    return punto_dos;
}
///////////////////////////////////////////////////////////puntaje de Nrs_tres.
int puntaje_tres(int dado[],int cantdado)
{
    int punto_tres=0,cont=0;
    for(int i=0; i<cantdado; i++)
    {
        if(dado[i]==3)
        {
            cont++;
        }
    }
    punto_tres = 3*cont;
    return punto_tres;
}
////////////////////////////////////////////////////////////puntaje de Nrs_cuantro.
int puntaje_cuatro(int dado[],int cantdado)
{
    int punto_cuatro=0,cont=0;
    for(int i=0; i<cantdado; i++)
    {
        if(dado[i]==4)
        {
            cont++;
        }
    }
    punto_cuatro = 4*cont;
    return punto_cuatro;
}
/////////////////////////////////////////////////////////////puntaje de Nrs_cinco.
int puntaje_cincos(int dado[],int cantdado)
{
    int punto_cinco=0,cont=0;
    for(int i=0; i<cantdado; i++)
    {
        if(dado[i]==5)
        {
            cont++;
        }
    }
    punto_cinco = 5*cont;
    return punto_cinco;
}
////////////////////////////////////////////////////////////puntaje de Nrs_seis.
int puntaje_seis (int dado [], int cantdado)
{
    int punto_seis=0,cont=0;
    for(int i=0; i<cantdado; i++)
    {
        if(dado[i]==6)
        {
            cont++;
        }
    }
    punto_seis = 6*cont;
    return punto_seis;
}
////////////////////////////////////////////////////////////MOSTRAR LOS PUNTOS X CARA
void DectectarCuandoDado(int dado[],int& cantdado,int& unos,int& dos,int& tres,int& cuatro,int& cinco,int& seis,int jugada)
{

    int puntuno,puntdos,punttres,puntcuatro,puntcinco, puntseis;

    cout<<""<<endl;
    if(jugada == 0 && unos == -1)
    {
        puntuno=puntaje_uno(dado,cantdado);
        cout<<endl<<"1 = cantidad de unos: "<<puntuno<<endl;

    }
    else if(jugada == 1)
    {
        unos=puntaje_uno(dado,cantdado);
    }
    if(jugada == 0 && dos == -1)
    {
        puntdos=puntaje_dos(dado,cantdado);
        cout<<"2 = puntaje por dados de cara dos: "<<puntdos<<endl;

    }
    else if(jugada == 2)
    {
        dos=puntaje_dos(dado,cantdado);
    }
    if(jugada == 0 && tres == -1)
    {
        punttres=puntaje_tres(dado,cantdado);
        cout<<"3 = puntaje por dados de cara tres: "<<punttres<<endl;
    }
    else if(jugada == 3)
    {
        tres=puntaje_tres(dado,cantdado);
    }
    if(jugada == 0 && cuatro == -1)
    {
        puntcuatro=puntaje_cuatro(dado,cantdado);
        cout<<"4 = puntaje por dados de cara cuatro: "<<puntcuatro<<endl;
    }
    else if(jugada == 4 )
    {
        cuatro=puntaje_cuatro(dado,cantdado);
    }
    if(jugada == 0 && cinco == -1)
    {
        puntcinco=puntaje_cincos(dado,cantdado);
        cout<<"5 = puntaje por dados de cara cinco: "<<puntcinco<<endl;
    }
    else if(jugada == 5)
    {
        cinco=puntaje_cincos(dado,cantdado);
    }
    if(jugada == 0 && seis == -1)
    {
        puntseis=puntaje_seis(dado,cantdado);
        cout<<"6 = puntaje por dados de cara seis: "<<puntseis;
    }
    else if(jugada == 6)
    {
        seis=puntaje_seis(dado,cantdado);
    }
    cout<<""<<endl;
}
/////////////////////////////////////////////////////////// seleccionar el dado
int sustituir (int dado[])
{
    int cant,numdado;
    cout<<endl;
    cout<<"Cuantos dados desea cambiar ";
    cin>>cant;
    cout<<endl;
    for(int i=0; i<cant; i++)
    {
        cout<<"cual es el dado que quiere cambiar ";
        cin>>numdado;
        cout<<endl;
        cambiar_un_solo_dado(dado,numdado);
    }

}
/////////////////////////////////////////////////////////// seleccionar el dado Manual
int sustituirMA (int dado[])
{
    int cant,numdado;
    cout<<endl;
    cout<<"Cuantos dados desea cambiar ";
    cin>>cant;
    cout<<endl;
    for(int i=0; i<cant; i++)
    {
        cout<<"cual es el dado que quiere cambiar ";
        cin>>numdado;
        cout<<endl;
        cout<<"Ingrese el valor del dado "<<numdado<<":"<<endl;
            cin>>dado[numdado-1];
            while(!(dado[numdado-1]>0&&dado[numdado-1]<7)){
                cout<<"Valor de dado Inexistente, por favor ingrese un numero del 1 al 6: "<<endl;
                cin>>dado[numdado-1];
                }
    }
}
////////////////////////////////////////////////////////// SUSTITUIR/cargar un dado

void cambiar_un_solo_dado(int dado[], int posNum)
{
    int limite=6;

    srand(time(NULL));
    for(int i=0; i<=1; i++)
    {
        dado[posNum-1]=(rand()%limite)+1;
    }
}
///////////////////////////////////////////////////////////// COMBINACIONES DE JUEGO.
/////////////////////////////////////////////////////////// PUNTOS DE ESCALERA.
int puntos_escalera(int dados[], int cantdado)
{
    int dado[5];
    for(int i=0; i<5; i++)
        {
            dado[i]=dados[i];
        }

    int minimo,aux,puntos;
    int x=1,cont=0,puntescalera = 0;

    for(int i=0; i<cantdado; i++)
    {
        minimo=i;
        for(int x=i+1; x<cantdado; x++)
        {
            if(dado[x]<dado[minimo])
            {
                minimo=x;
                cont++;
            }
        }
        aux=dado[i];
        dado[i]=dado[minimo];
        dado[minimo]=aux;
    }
    cont=0;
    for(int i=0; i<cantdado; i++)
    {

        if(dado[i]<dado[i+1])
        {
            cont++;
        }
    }
    if(cont==5)
    {
        puntos = 25;
    }else{
        puntos = 0;
    }

    return puntos;
}
//////////////////////////////////////////////////////////PUNTOS DE FULL.
int puntos_full(int dado[],int cantdado)
{
    int n1, n2 = 0, count1 = 1, count2 = 0, total = 0;
    n1 = dado[0];
    for (int i = 1; i < cantdado; i++)
    {
        if (n1 == dado[i])
            count1++;
        else if (n2 == 0)
        {
            n2 = dado[i];
            count2++;
        }
        else if (n2 == dado[i])
            count2++;
    }
    if(count1 == 3 && count2 == 2 || count2 == 3 && count1 == 2)
    {
        total = 30;
    }
    return total;
}
////////////////////////////////////////////////////////// PUNTOS POR POKER.
int puntos_x_poker(int dado[], int cantdado)
{
    int i,x,cont=0,punt_poker=0;
    for(x=0; x<cantdado; x++)
    {
        for(i=0; i<cantdado; i++)
        {
            if(dado[x] == dado[i]&&x!=i)
            {
                cont++;
            }
        }
    }
    if(cont == 12)
    {
        punt_poker = 40;
    }
    return punt_poker;
}
//////////////////////////////////////////////////////// GENERALA.
int GENERALA (int dado[], int cantdado)
{
    for (int i = 1; i < cantdado; i++)
    {
        if (dado[i] != dado[i - 1])
            return 0;
    }
    return 50;
}
///////////////////////////////////////////////////////////////////////
int mostrarjugada(int dado[],int cantdado,int& escalera,int& full,int& poker,int& gene,int jugada, int& turnos)
{

    int puntescalera=0,puntfull=0,puntpoker=0,ganador=0;

    puntescalera=puntos_escalera(dado,cantdado);
    if(jugada == 0 && escalera == -1)
    {
        cout<<"7 = puntaje por escalera: ";
        cout<<puntescalera<<endl;
    }
    else if(jugada == 7)
    {
        escalera = puntescalera;
    }
    puntfull=puntos_full(dado,cantdado);
    if(jugada == 0 && full == -1)
    {
        cout<<"8 = puntaje por full: ";
        cout<<puntfull<<endl;
    }
    else if(jugada == 8)
    {
        full = puntfull;
    }
    puntpoker=puntos_x_poker(dado,cantdado);
    if(jugada == 0 && poker == -1)
    {
        cout<<"9 = puntaje por poker: ";
        cout<<puntpoker<<endl;
    }
    else if(jugada == 9)
    {
        poker=puntpoker;
    }

    ganador=GENERALA (dado,cantdado);
    if(jugada == 0 && gene == -1)
    {
        cout<<"10 = puntaje por Generala: "<<ganador<<endl;
    }
    else if(jugada == 10)
    {
        gene=ganador;
        if (gene==50){
            turnos=-1;
            cout<<"  !FELICIDADES!  "<<endl;
            cout<<"!JUGADA GANADORA!"<<endl;
            }
    }

}
////////////////////////////////////////////////puntaje
void tot_puntaje(int& puntaje, int& cont1, int& maypunt)
{
//int cont,maypunt;

if(cont1==0){
maypunt=puntaje;
cont1++;
}
else if(puntaje>maypunt){
    maypunt=puntaje;
}
cout<<maypunt;
}
#endif // FUNCIONES_H_INCLUDED
