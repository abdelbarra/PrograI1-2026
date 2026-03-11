//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 04/03/2026
#include<iostream>
using namespace std;
float Promedio(float nota1,float nota2){
    float promedio;
    promedio=(nota1+nota2)/2;
    return promedio;
}
int main(){
    float nota1,nota2,promedio;
    cout<<"ingrese la nota 1: ";
    cin>>nota1;
    cout<<"ingrese la segunda nota: ";
    cin>>nota2;
    promedio=Promedio(nota1,nota2);
    cout<<"tu nota promedio ocon respecto a las dos anteriores notas es: "<<promedio<<endl;
    return 0;
}