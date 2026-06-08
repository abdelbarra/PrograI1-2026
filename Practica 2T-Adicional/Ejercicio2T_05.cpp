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
void VentasPorSucursal(int matriz[4][7]){
    for (int i = 0; i < 4; i++){
        int sumasucursal=0;
        for (int j = 0; j < 7; j++){
            sumasucursal=sumasucursal+matriz[i][j];
        }
        cout<<"la suma de la sucursal "<<i+1<<" es igual a: "<<sumasucursal<<endl;        
    }
}
void VentasPorDia(int matrix[4][7]){
    for (int j = 0; j < 7; j++){
        int sumadia=0;
        for (int i = 0; i < 4; i++){
            sumadia=sumadia+matrix[i][j];
        }
        cout<<"la suma de el dia "<<j+1<<" es: "<<sumadia<<endl;
    }  
}
int main(){
    int matriz[4][7],sumadia=0,sumasucursal=0;
    int aleatoreo=0;
    for (int i = 0; i < 4; i++){
        for (int j = 0;j < 7; j++){
            aleatoreo=GenerarNumeroAleatoreo(1,20);
            matriz[i][j]=aleatoreo;
        }
        
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0;j < 7; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Las ventas por sucursal son: "<<endl;
    VentasPorSucursal(matriz);
    cout<<"las ventas por cada dia de la semana son: "<<endl;
    VentasPorDia (matriz );
    return 0;
}