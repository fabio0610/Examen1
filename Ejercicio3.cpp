#include <iostream>
#include <list>
#include <sstream>

using namespace::std;

typedef struct Empleado{
    string nombre;
    int horas;
    float tarifa;
    float salario;
}Empleado;

list<Empleado> empleados;

void llenado_Empleados(string nombre, int horas, float tarifa,float salario){
    empleados.back().nombre=nombre;
    empleados.back().horas=horas;
    empleados.back().tarifa=tarifa;
    empleados.back().salario=salario;

}

float total_Salario(int horas, float tarifa){
    float salario = 0.0;
    if(horas<=40){
        salario=horas*tarifa;
    }else{
        salario=(horas*tarifa)+5;
    }
    return salario;
}


int main(){
    Empleado empleado;
    string nombre=" ";
    int horas=0;
    float tarifa=0.0;
    int i = 1;
    do{
        cout <<"Ingrese nombre del empleado (-1 para finalizar):";
        cin >>nombre;
        if(nombre=="-1"){
            i=-1;
        } else {
            cout << "Ingrese las horas trabajadas:";
            cin >> horas;
            cout << "Ingrese la tarifa por hora del empleado ($ 00.00):";
            cin >> tarifa;
            empleados.push_back(empleado);
            total_Salario(horas,tarifa);
            llenado_Empleados(nombre, horas, tarifa,total_Salario(horas,tarifa));
        }
    }while(i>0);
    cout<<endl<<endl<<endl<<endl;
    for (auto empl:empleados) {
        cout<< "El salario de "<<empl.nombre<< " es de "<<empl.salario<<endl;
    }
}