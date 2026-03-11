//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 04/03/2026
#include<iostream>
using namespace std;
float Distancia_r(float velocidad, float tiempo){
    float distancia;
    distancia=velocidad*tiempo;
    return distancia;
}
int main(){
    float distancia, tiempo, velocidad;
    cout<<"ingrese una velocidad: ";
    cin>>velocidad;
    cout<<"ingrese un tiempo: ";
    cin>>tiempo;
    distancia=Distancia_r(velocidad,tiempo);
    cout<<"la distancia recorrida es de: "<<distancia<<endl;
    return 0;
}