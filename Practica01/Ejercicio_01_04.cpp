//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 11/02/2024
#include <iostream>
using namespace std;
int main(){
    int nota_practicas, nota_teorica, nota_participacion,nota_promedio;
    cout<<"ingrese su nota en practicas del 1 al 100 ";
    cin>> nota_practicas;
    cout<<"ingrese su nota en teoria del 1 al 100 ";
    cin>> nota_teorica;
    cout<<"ingrese su nota en practicas del 1 al 100 ";
    cin>>nota_participacion;
    nota_promedio=(nota_participacion*0.1)+(nota_practicas*0.3)+(nota_teorica*0.6);
    cout<<"tu nota final es: "<<nota_promedio;
    return 0;

}
