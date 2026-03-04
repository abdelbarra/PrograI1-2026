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
    int n,pcara=0,pcruz=0;
    int moneda;
    double pcara777=0;
    double pcruz777=0;
    cout<<"ingrese un cantidad de lanzamientos: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        moneda=1+rand()%2;
        cout<<moneda<<endl;
        if(moneda%2==0){
            pcara=pcara+1;
        }
        else{
            pcruz=pcruz+1;
        }
    }
    pcara777=(pcara*100)/n;
    pcruz777=(pcruz*100)/n;
    cout<<"el total de lanzamientos es: "<<n<<" el porcentaje de apariciones de cara es: "<<pcara777<<"%"<<endl;
    cout<<"el total de lanzamientos es: "<<n<<" el porcentaje de apariciones de cruz es: "<<pcruz777<<"%"<<endl;
    return 0;

}