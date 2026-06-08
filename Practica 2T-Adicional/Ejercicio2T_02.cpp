// PRÁCTICA ADICIONAL 2T
// Materia: Programación I, Paralelo 4
// Autor: Abdel Jose Barra Alarcon
// Fecha creación: 11/05/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;
int GenerarNumeroAleatoreo(int liminf,int limsup){
    int aleatoreo=0;
    aleatoreo=(rand()%(limsup-liminf+1))+liminf;
    return aleatoreo;
}
int main(){
    int n,p0=0,p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,clasificar;
    vector<int> pixeles;
    cout<<"ingrese un numero: ";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
       int aleatoreo=0;
       aleatoreo=GenerarNumeroAleatoreo(0,99);
       cout<<aleatoreo<<endl;
       pixeles.push_back(aleatoreo);
    }
    for (int j=0;j<pixeles.size();j++){ 
        cout<<pixeles[j]<<" "<<endl;

        switch (pixeles[j]/10 ){
        case 0:
            p1=p1+1;
            break;
        case 1:
            p2=p2+1;
            break;
        case 2:
            p3=p3+1;
            break;
        case 3:
            p4=p4+1;
            break;
        case 4:
            p5=p5+1;
            break;
        case 5:
            p6=p6+1;
            break;
        case 6:
            p7=p7+1;
            break;
        case 7:
            p8=p8+1;
            break;
        case 8:
            p9=p9+1;
            break;
        case 9:
            p0=p0+1;
            break;
        
        
        default:
            break;
        }
    }
    cout<< "0-9 hay: "<<p1<<" pixeles"<<endl;
    cout<< "10-19 hay: "<<p2<<" pixeles"<<endl;
    cout<< "20-29 hay: "<<p3<<" pixeles"<<endl;
    cout<< "30-39 hay: "<<p4<<" pixeles"<<endl;
    cout<< "40-49 hay: "<<p5<<" pixeles"<<endl;
    cout<< "50-59 hay: "<<p6<<" pixeles"<<endl;
    cout<< "60-69 hay: "<<p7<<" pixeles"<<endl;
    cout<< "70-79 hay: "<<p8<<" pixeles"<<endl;
    cout<< "80-89 hay: "<<p9<<" pixeles"<<endl;
    cout<< "90-99 hay: "<<p0<<" pixeles"<<endl;

    return 0;
}