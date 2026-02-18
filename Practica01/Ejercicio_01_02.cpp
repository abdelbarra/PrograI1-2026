//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 11/02/2024
#include <iostream>
using namespace std;
int main(){
    int precio, precio_iva;
    const float iva=0.13;
    cout<<"ingrese el precio de su producto";
    cin>>precio;
    cout<< "el precio ingresado es: "<<precio<< endl;
    precio_iva=(precio*iva)+precio;
    cout<<"el precio de su producto con iva incluido es de: "<<precio_iva;
    return 0;
}