//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 11/02/2024
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int cateto1, cateto2;
    float hipotenusa;
    cout<<"ingrese el valor de su cateto a";
    cin>>cateto1;
    cout<<"ingrese el valor de su cateto b";
    cin>>cateto2;
    hipotenusa=sqrt(pow(cateto1,2)+pow(cateto2,2));
    cout<<"la hipotenusa del triangulo rectaangulo es: "<<hipotenusa;


}