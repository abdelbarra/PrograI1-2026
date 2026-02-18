//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 11/02/2024
#include <iostream>
using namespace std;
int main(){
    int edad;
    cout<<"ingrese una edad ";
    cin>>edad;
    if ((edad>=18)&&(edad<=25))
    {
        cout<<"la edad: "<<edad<<" ingresada esta en el rango de 18 a 25 años";

    }
    else{
        cout<<"la edad ingresada no esta en el rango de 18 a 25 años";
    }
    return 0;

}