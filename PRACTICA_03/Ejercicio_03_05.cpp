//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 27/02/2026
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    srand(time(NULL));
    int n,cprimos=0,numero;
    cout<<"ingrese la cantidad de numeros: ";
    cin>>n;
    bool primo = true;
    for(int i=1;i<=n;i++){
        numero=1+rand()%10000;
        for(int j=2;i<numero;j++){
            if(numero%1==0){
                primo = false;
            }
        }
        if(primo== true){
            cout<<"el numero: "<<numero<<" es primo"<<endl;
            cprimos=cprimos+1;
        }
        else{
            cout<<"el numero: "<<numero<<" no es primo"<<endl;
        }
    }
    cout<<"la cantidad de numeros primos es: "<<cprimos;
    return 0;

}