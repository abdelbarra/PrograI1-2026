//Materia:programacion 1,Paralelo4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 27/02/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    int numero;
    cout << "Cuantos numeros generar: ";
    cin >> numero;
    int suma = 0;
    int mayor = 0;
    int menor = 1000;
    for(int i = 1; i <= numero; i++) {
        int num = rand() % 1000 + 1;
        cout << num << endl;
        suma = suma + num;
        if(num > mayor) {
            mayor = num;
        }
        if(num < menor) {
            menor = num;
        }
    }
    float promedio = (suma * 1.0) / numero;
    cout << "Sumatoria total: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor numero: " << mayor << endl;
    cout << "Menor numero: " << menor << endl;
    return 0;
}