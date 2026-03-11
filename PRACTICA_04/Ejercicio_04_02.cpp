//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 04/03/2026
#include<iostream>
using namespace std;
int Mayor(int a,int b,int c){
    if (a>b){ 
        if (a>c){
            return a;

        }
        else{
            return c;
        }
        
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }   
}
int main(){
    int a,b,c,mayor;
    cout<<"ingrese el primer numero: ";
    cin>>a;
    cout<<"ingrese el segundo numero: ";
    cin>>b;
    cout<<"ingrese el tercer numero: ";
    cin>>c;
    mayor=Mayor(a,b,c);
    cout<<"de los tres numeros que ingresaste el mayor de ellos es: "<<mayor<<endl;
    return 0;
}