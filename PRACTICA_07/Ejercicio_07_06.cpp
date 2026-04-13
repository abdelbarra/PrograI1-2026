//Materia:programacion 1,Paralelo 4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 13/04/2026
#include <iostream>
using namespace std;

int main(){
    int v1[5], v2[5], v3[5];

    for(int i=0;i<5;i++){
         cin>>v1[i];}
    for(int i=0;i<5;i++){
        cin>>v2[i];}

    for(int i=0;i<5;i++)
        v3[i] = v1[i] + v2[i];

    for(int i=0;i<5;i++)
        cout<<v3[i]<<" ";

    return 0;
}