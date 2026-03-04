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
    int numero,factorial=1;
    numero=1+rand()%10;
    for(int i=1;i<=numero;i++){
        factorial=factorial*i;
    }
    cout<<"el factorial del numero random: "<<numero<<" es: "<<factorial<<endl;
    return 0;
}