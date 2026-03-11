//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 04/03/2026
#include<iostream>
using namespace std;
int Suma_naturales(int n){
    int suma=0;
    if(n>=1){
        for(int i=1;i<=n;i++){
            suma=suma+i;
        }
        return suma;
    }
    else{
        return 0;
    }
}
int main(){
    int n,suma;
    cout<<"ingrese un numero: ";
    cin>>n;
    if (n>0){
        suma=Suma_naturales(n);
        cout<<"la sumatoria de naturales hasta "<<n<<" es de: "<<suma<<endl;
    }
    else{
        cout<<"el numero ingresado tiene que ser positivo";
    }
    return 0;
}