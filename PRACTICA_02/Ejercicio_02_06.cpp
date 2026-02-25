//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 25/02/2026
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ingrese uun numero en un  rango de 1 a 100: ";
    cin>>a;
    cout<<"ingrese un segundo numero: ";
    cin>>b;
    if (a!=b){
        cout<<"los numeros no son iguales";
        if (a>b){
            cout<<"el primer valor es menor al segundo valor"<<endl;
            for(b;b<=a;b++){
                cout<<b<<" ";
            }
        }
        else{
            cout<<"el primer valor es menor al seundo valor"<<endl;
            for(a;a<=b;a++){
                cout<<a<<" ";
            }
        }

    }
    else{
        cout<<"nos numeros "<<a<<" y "<<b<<" son iguales"<<endl<<"elija otros valores distintos";
    }
    return 0; 
}