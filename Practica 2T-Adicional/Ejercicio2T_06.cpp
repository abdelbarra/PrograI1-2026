// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Abdel Jose Barra Alarcon
// Fecha creación: 11/05/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;
int GenerarNumeroAleatoreo(int liminf,int limsup){
    int aleatoreo=0;
    aleatoreo=(rand()%(limsup-liminf+1))+liminf;
    return aleatoreo;
}
void MejorEstudiante(int matriz[20][3]){
    int contador=0;
    int notamayor=0;
    for (int i = 0; i < 20; i++){
        int suma=0;
        for (int j = 0; j < 3; j++){
            suma=suma+matriz[i][j];
        }
        suma=(suma/3);
        if (suma>notamayor){
            notamayor=suma;
            contador=i;
        }
    }
    cout<<"el mejor promedio del curso es "<<notamayor<<" y pertenece al estudiante N: "<<contador+1<<" de la lista"<<endl;

}
void PormedioGnral (int matriz[20][3]){
    int promedio=0,promediognral=0;
    for (int i = 0; i < 20; i++){
        int suma=0;
        for (int j = 0; j < 3; j++){
            suma=suma+matriz[i][j];
        }
        suma=(suma/3);
        promedio=promedio+suma;
    }
    promediognral=(promediognral+promedio)/20;
    cout<<"el promedio general del curso es: "<<promediognral<<endl;
}
int main (){
    int matriz[20][3],notafinal=0,promerdiognral=0;
    int aleatoreo=0;
    for (int i = 0; i <20; i++){
        for (int j = 0; j < 3; j++){
            aleatoreo=GenerarNumeroAleatoreo(0,100);
            matriz[i][j]=aleatoreo;
        }   
    }
     for (int i = 0; i < 20; i++){
        cout<<"estudiante "<<i+1<<" notas --> ";
        for (int j = 0;j < 3; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    PormedioGnral(matriz);
    MejorEstudiante(matriz);
    return 0;
}