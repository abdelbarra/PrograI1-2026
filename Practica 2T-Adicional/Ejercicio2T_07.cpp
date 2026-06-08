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
void VerificarAlertas(int matriz[5][24],int umbral){
    int c0=0,c1=0,c2=0,c3=0,c4=0;
    for (int i = 0; i < 5; i++){
        int veces=0;
        for (int j = 0;j < 24; j++){
            if (matriz[i][j]>umbral){
                veces=veces+1;
            }
        }
        switch (i){
        case 0:
            if (veces>3){
                cout<<"1 el paciente: Ana Torroja supero el umbral de "<<umbral<<" temperatura mas de 3 con un total de: "<<veces<< " veces duante el dia."<<endl;
            } 
            break;
        case 1:
            if (veces>3){
                cout<<"2 el paciente: Juan Luna supero el umbral de "<<umbral<<" temperatura mas de 3 con un total de: "<<veces<< " veces duante el dia."<<endl;
            }
            break;
        case 2:
            if (veces>3){
                cout<<"3 el paciente: Sergio Murillo supero el umbral de "<<umbral<<" temperatura mas de 3 con un total de: "<<veces<< " veces duante el dia."<<endl;
            }
            break;
        case 3:
            if (veces>3){
                cout<<"4 el paciente: Liliana Espinoza supero el umbral de "<<umbral<<" temperatura mas de 3 con un total de: "<<veces<< " veces duante el dia."<<endl;
            }
            break;
            if (veces>3){
                cout<<"5 el paciente: Mercedes Lima supero el umbral de "<<umbral<<" temperatura mas de 3 con un total de: "<<veces<< " veces duante el dia."<<endl;
            }
            break;
        default:
            break;
        } 
    }
}
int main(){
    vector<string> nomobres={"Ana Torroja","Juan Luna","Sergio Murillo","Liliana Espinoza","Mercedes Lima"};
    int matriz [5][24];
    int aleatoreo=0,umbral=0;
    cout<<"Ingrese un umbral de temperatura entre 20 y 40 para moniteorear a los pacientes: ";
    cin>>umbral;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 24; j++){
            aleatoreo=GenerarNumeroAleatoreo(20,40);
            matriz[i][j]=aleatoreo;
        } 
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0;j < 24; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    VerificarAlertas(matriz,umbral);
    return 0;
}