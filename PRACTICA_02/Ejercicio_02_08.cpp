//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 25/02/2026
#include <iostream>
using namespace std;
int main(){
    int n,precio,preciosum=0,npreciosum=0;
    float iva=0;
    cout<<"ingrese la cantidad de productos: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"ingrese el precio del producto: ";
        cin>>precio;
        iva=iva+(precio*0.13);
        preciosum=preciosum+precio;

    }
    if (preciosum>2500){
        npreciosum=preciosum-(preciosum*0.05);
        cout<<"la suma de los precios de los productos es: "<<preciosum<<" este supera los 2500, asi que se aplica el descuento de 5%"<<endl<<"la nueva suma de precios es:  "<<npreciosum<<endl;
    }
    else{
         cout<<"la suma de los precios de los productos es: "<<preciosum<<" este no supera los 2500 asi que no ay descuento"<<endl;
    }
    cout<<"el pago del 13% de impuestos sobre las ventas es: "<<iva<<endl;
}