//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 11/02/2024
#include <iostream>
using namespace std;
int main(){
    int numero1,numero2,suma,resta,multi;
    float divicion;
    cout<<"ingrese el primer numero";
    cin>>numero1;
    cout <<"ingrese el segundo numero";
    cin >>numero2;
    suma=numero1+numero2;
    resta=numero1-numero2;
    multi=numero1*numero2;
    divicion=numero1/numero2;
    cout<<"la suma de los dos numeros es: "<< suma<< endl;
    cout<<"la resta de los dos numeros es: "<< resta<< endl;
    cout<<"la multiplicacion de los dos numeros es: "<< multi<< endl;
    cout<<"la divicion de los dos numeros es: "<< divicion<< endl;
    return 0;
}