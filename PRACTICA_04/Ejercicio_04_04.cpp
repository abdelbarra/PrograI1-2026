//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 04/03/2026
#include<iostream>
using namespace std;
float Cambiooficial(float cantidad){
    float cambio;
    const float convercion=6.92;
    cambio=cantidad/convercion;
    return cambio;
}
float Cambioparalelo(float cantidad1){
    float cambio2;
    const float convercion=9.17;
    cambio2=cantidad1/convercion;
    return cambio2;
}
int main(){
    float cambio,cambio2,cantidad;
    cout<<"ingrese una cantidad en bolivianos: ";
    cin>>cantidad;
    cout<<"el tipo de cambio oficial de "<<cantidad<<"Bs a dolares es de:"<<Cambiooficial(cantidad)<<"$"<<endl;
    cout<<"el tipo de cambio paralelo de "<<cantidad<<"Bs a dolares es de:"<<Cambioparalelo(cantidad)<<"$"<<endl;
    return  0;
}