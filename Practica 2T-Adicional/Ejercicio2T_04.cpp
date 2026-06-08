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
int main(){
    int matrix[100][100],filas,columnas,aleatoreo=0;
    int a,b,suma=0,producto=1;
    cout<<"ingrese el numero de filas: ";
    cin>>filas;
    cout<<"ingrese en numero de columnas: ";
    cin>>columnas;
    cout<<"ingrese el limite inferior para el numero aleatoreo: ";
    cin>>a;
    cout<<"ingrese el limite sumperior para el numero aleatoreo: ";
    cin>>b;
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            aleatoreo=GenerarNumeroAleatoreo(a,b);
            matrix[i][j]=aleatoreo;   
        }
        
    }
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout<<matrix[i][j]<<" "; 
        }
        cout<<endl;    
    }
    for (int i = 0; i < filas; i++){
        for (int j = 0; j <columnas; j++){
        }
        suma = suma+matrix[i][0];
        cout<<matrix[i][0]<<" ";
        
    }
    cout<<"la suma de la primera coolumna es: "<<suma<<endl;
    for (int j = 0; j < columnas; j++){
        producto= producto*matrix[0][j];
        cout<<matrix[0][j]<<" "; 
        
    }
    cout<<"el producto de la primra filas es: "<<producto<<endl;
    
    return 0;
}