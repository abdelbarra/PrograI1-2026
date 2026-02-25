//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 25/02/2026
#include <iostream>
using namespace std;
int main(){
    int num,suma=0;
    cout<<"ingrese un numero: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        int factorial=1;
        for(int j=1;j<=i;j++){
            factorial=factorial*j;
        }
        suma=suma+factorial;
    }
    cout<<"la suma de los factoriales desde el 1 hasta "<<num<<" es: "<<suma;
    return 0;
}