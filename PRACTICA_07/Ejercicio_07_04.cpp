//Materia:programacion 1,Paralelo 4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 13/04/2026
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"ingreseuna cantidad";
    cin>>n;

    int v1[n], v2[n], v3[n];

    for(int i=0;i<n;i++) cin>>v1[i];
    for(int i=0;i<n;i++) cin>>v2[i];

    for(int i=0;i<n;i++)
        v3[i] = v1[i] * v2[i];

    for(int i=0;i<n;i++)
        cout<<v3[i]<<" ";

    return 0;
}