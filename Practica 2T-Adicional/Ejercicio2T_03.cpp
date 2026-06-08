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
string LimpiarTexto(string palabra){
    string limpio="";
    for (int i = 0; i < palabra.size(); i++){
        if (palabra[i]!= ' '){
            limpio.push_back(palabra[i]);
        }
    }
    return limpio;
    
}
bool Palindromo(string palabra){
    int izquierda=0;
    for (int i = 0; i < palabra.size(); i++){
        //h
    }
    
}
int main(){
    string palabra,palindromo;
    cout<<"ingreese una palabra: ";
    getline(cin,palabra);
    bool palindromo=true; 


}