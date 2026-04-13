//Materia:programacion 1,Paralelo 4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 13/04/2026
#include <iostream>
using namespace std;

int main(){
    int v[10];
    int num, i=0;

    while(i<10){
        cin>>num;
        if(num<0) break;
        v[i] = num;
        i++;
    }

    for(int j=0;j<i;j++)
        cout<<v[j]<<" ";

    return 0;
}