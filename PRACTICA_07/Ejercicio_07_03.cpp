//Materia:programacion 1,Paralelo 4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 13/04/2026
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Ingrese cantidad: ";
    cin>>n;

    int calificaciones[n];
    double desviacion[n];
    double suma=0;

    for(int i=0;i<n;i++){
        cin>>calificaciones[i];
        suma += calificaciones[i];
    }

    double promedio = suma/n;

    double sumaVar=0;

    cout<<"Valor   Desviacion"<<endl;

    for(int i=0;i<n;i++){
        desviacion[i] = calificaciones[i] - promedio;
        cout<<calificaciones[i]<<"   "<<desviacion[i]<<endl;
        sumaVar += desviacion[i]*desviacion[i];
    }

    double varianza = sumaVar/n;

    cout<<"Promedio: "<<promedio<<endl;
    cout<<"Varianza: "<<varianza<<endl;

    return 0;
}