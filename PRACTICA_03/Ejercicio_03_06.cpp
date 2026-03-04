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
    int n,niños,niños1=0,niños2=0,niños3=0,spañales=0;
    cout<<"ingrese la cantidad de niños: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        niños=1+rand()%3;
        switch (niños)
        {
        case 1:
            niños1=niños1+1;
            break;
        case 2:
        niños2=niños2+1;
        break;
        case 3:
        niños3=niños3+1;
        break; 
        
        default:
            break;
        }
        spañales=(niños1*6)+(niños2*3)+(niños3*2);

    }
    cout<<"la cantidad de niños de 1 años es: "<<niños1<<" la cantidad de pañales al dia es: "<<niños1*6<<endl;
    cout<<"la cantidad de niños de 2 años es: "<<niños2<<" la cantidad de pañales al dia es: "<<niños2*3<<endl;
    cout<<"la cantidad de niños de 3 años es: "<<niños3<<" la cantidad de pañales al dia es: "<<niños3*2<<endl;
    cout<< "la cantidad de pañales es: "<<spañales;
}