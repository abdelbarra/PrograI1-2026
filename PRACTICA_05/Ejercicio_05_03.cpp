//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 04/03/2026
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
//el salario minimos es 3300, entonces 1 hora trabajada ssegun salario minimo es 13.75.bs
//el monto de una hora extra en bolivia es del 100% osea 27.50.Bs
float Bonificacion(float horas){
    float bonificacion;
    const float horas_ex=27.50;
    bonificacion= (horas-8)*horas_ex;
    return bonificacion;
}
int main(){
    int horas;
    float pago, bonificacion;
    const float tarifa=13.75;
    cout<<"ingrese las horas que trabajaste: ";
    cin>>horas;
    if (horas>8){
        bonificacion=Bonificacion(horas);
        pago=8*tarifa;
        cout<<"tus horas trabajadas en la jornada son: "<<horas<<" tu pago es de: "<<pago;
        cout<<"t¿como trabajaste horas extras tu bonificacion es de: "<<bonificacion<<endl<<"y tu salariototal es de: "<<bonificacion+pago;
    }
    else{
        cout<<"tus horas trabajadas en la jornada son: "<<horas<<" tu pago es de: "<<pago<<" no trabajaste horas extras, no hay bonificacion"<<endl;
    }
    return 0;
}