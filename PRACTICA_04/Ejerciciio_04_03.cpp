//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 04/03/2026
#include<iostream>
using namespace std;
float Volumen(float radio,float altura){
    const float pi=3.1416;
    float volumen;
    volumen=pi*radio*radio*altura;
    return volumen;
}
int main(){
    float radio,altura,volumen;
    cout<<"ingrese el radio de el cilindro: ";
    cin>>radio;
    cout<<"ingrese la altura del cilindro: ";
    cin>>altura;
    volumen=Volumen(radio,altura);
    cout<<"el volumen de el cilindro es: "<<volumen<<endl;
    return 0;
}