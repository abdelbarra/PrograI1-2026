//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 11/02/2024
#include <iostream>
using namespace std;
int main(){
    int numeros[3],num4;
    cout<<"ingrese 3 numeros"<<endl;
    for(int i=1;i<=3;i++)
    {
        cin>>numeros[i];

    }
    cout<<"ingrese en numero a buscar";
    cin>>num4;
    for(int i=0;i<=3;i++)
    {
        if(numeros[i]==num4)
        {
            cout<<"el numero: "<<num4<<" que ingresaste se repite con uno de los primeros 3 numeros";
        }
    }

}
