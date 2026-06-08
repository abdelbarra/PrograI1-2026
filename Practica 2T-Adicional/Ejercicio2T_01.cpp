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
    vector<string> nombre={"jose","ana","pepe","marco","sofia"};
    vector<string> nombre2={"jose","sofia","mama","papa","perrito"};
    vector<string> comunes;
    for (int i = 0; i < nombre.size(); i++){
        for (int j = 0; j < nombre2.size(); j++){
            if (nombre[i]==nombre2[j]){
               comunes.push_back(nombre[i]); 
            }   
        }     
    }
    cout<<"los nombres comunes son: ";
    for (int g = 0; g < comunes.size(); g++){
        cout<<comunes[g]<<" ";
    }
    return 0;
}
