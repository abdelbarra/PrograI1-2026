//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 04/03/2026
#include<iostream>
using namespace std;
int Cdigitos(int n){
    int contador;
    while(n>0){
        n=n/10;
        contador=contador+1;
    }
    return contador;
}
int main(){
    int n, contador;
    cout<<"ingrese un numero: ";
    cin>>n;
    contador=Cdigitos(n);
    cout<<"el numero que ingresaste tiene: "<<contador<<" digitos"<<endl;
    return 0;
}