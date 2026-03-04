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
    int n,frec_pares=0;
    int cara;
    cout<<"la semilla es: "<<time(NULL)<<"el n random es: "<<rand()<<endl;
    cout<<"ingrese un numero: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        cara=1+rand()%6;
        cout<<cara<<endl;
        if (cara%2==0){
            frec_pares+=1;
        }
    }
    cout<<"la frecuencia de las caras pares es: "<< frec_pares<<endl;
    return 0;


}