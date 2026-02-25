//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 25/02/2026
#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"ingrese un numero del 1 al 10 ";
    cin>>numero;
    for(int i=1;i<=10;i++){
        cout<< numero<<" x "<<i<<" = "<<(numero*i)<<endl;

    }
    return 0;
}