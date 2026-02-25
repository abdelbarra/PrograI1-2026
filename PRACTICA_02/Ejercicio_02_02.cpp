//Materia. programacion 1, paralelo 4
//Autor: Abdel Jose Barra Alarcon 
//Carnet: 13828347
//Carrera del estudiante: Economia e inteligencia de negocios 
//Fecha de creacion: 25/02/2026
#include <iostream>
using namespace std;
int main(){
    int num,sw=0,par=0,impar=0,primo=0,contadordiv = 0;
    while ( sw != 1){
        cout<<"ingrese un nunero";
        cin>>num;
         if (num >= 1 && num <= 100) {
            if (num % 2 != 0) {
                impar = impar + num;
            }
            else{
                par=par+num;
            }
            //vemos si en numero esprimo
            for (int i = 1; i <= num; i++) {
                if (num % i == 0) {
                    contadordiv = contadordiv + 1;
                }
            }
            if (contadordiv == 2) {
                primo = primo + num;
            }
        }
        else {
            cout << "el numero que ingresaste no estra entre 1 y 100 " << endl;
            sw=sw+1;
        }  
    }
    cout << "\nResultados finales:" << endl;
    cout << "Suma de los numeros pares: " << par << endl;
    cout << "Suma de números impares: " << impar << endl;
    cout << "Suma de números primos: " << primo << endl;
    return 0;
}
