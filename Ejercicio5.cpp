#include <iostream>
#include <list>
#include <sstream>
using namespace::std;

list<int> numeros;

void InsertarEnOrden(int numero){
    numeros.push_back(numero);
    numeros.sort();
}

void eliminarNumero(int numero){
    numeros.remove(numero);
}


int main(){
int opcion=0;
int numero=0;
do{
    cout<<"1. Agregar numero a lista"<<endl;
    cout<<"2. Eliminar un numero de la lista"<<endl;
    cout<<"3. Salir"<<endl;
    cin >>opcion;
    if (opcion == 1){
        cout << "Agregue un numero entero a la lista"<<endl;
        cin>>numero;
        InsertarEnOrden(numero);
        cout << "La lista actual es:"<<endl;
        cout <<"[";
        for (auto num:numeros) {
            cout <<num <<" ";
        }
        cout<<"]"<<endl;
    } else if(opcion==2){
        cout <<"Ingrese el numero que quiere eliminar de la lista"<<endl;
        cin >>numero;
        eliminarNumero(numero);
        cout << "La lista actual es:"<<endl;
        cout <<"[";
        for (auto num:numeros) {
            cout <<num <<" ";
        }
        cout<<"]"<<endl;
    }else if(opcion==3){
        opcion=3;
        break;
    }else{
        cout<<"Ingrese un numero valido"<<endl;
        opcion=1;
    }
} while (0<opcion<3);

}