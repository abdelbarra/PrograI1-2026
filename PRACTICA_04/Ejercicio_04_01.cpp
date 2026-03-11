//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 04/03/2026
#include<iostream>
using namespace std;
float Area(float base,float altura){
    float area;
    area=(base*altura)/2;
    return area;  
}
int main(){
    float base,altura,area;
    cout<<"ingrese la base del triangulo: ";
    cin>>base;
    cout<<"ingrese la altura de triangulo: ";
    cin>> altura;
    area= Area(base,altura);
    cout<<"el area del triangulo es: "<<area<<endl;
    return 0;
}