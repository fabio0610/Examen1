#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace::std;

int arreglo[10];

void llenado(){
    int cont=0;
    int numero =0;
    for (int i = 0; i < 10; ++i) {
        cout << "Ingrese cualquier numero entero para la posicion " << cont+1 << " del arreglo"<<endl;
        cin>>numero;
        arreglo[i]=numero;
        cont++;
    }
}

int numeroMayor(){
    int aux=0;
    for (int i = 0; i < 10; ++i) {
        if(arreglo[i]>=aux){
            aux=arreglo[i];
        }else{
            aux=aux;
        }
    }
    return aux;
}

int multImpar(){
    int mult=1;
    for (int i = 0; i < 10; ++i) {
        if(arreglo[i]%2!=0){
            mult=mult*arreglo[i];
        }else{
            mult=mult;
        }
    }
    return mult;
}

int main ()
{
    llenado();

    cout <<"El arreglo es:"<<endl;
    cout <<"[";
    for (int i = 0; i < 10; ++i) {
        cout << arreglo[i]<<" ";
    }
    cout<<"]"<<endl;

    cout<<"El numero mayor del arreglo es: "<<endl;
    cout <<numeroMayor() << endl;

    cout<<"La multiplicacion de los numeros impares es: "<<endl;
    cout<<multImpar();
}