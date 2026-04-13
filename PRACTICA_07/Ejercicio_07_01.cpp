//Materia:programacion 1,Paralelo 4
//Autor: Abdel JOse Barra Alarcon
//Carnet: 13828347
//Fecha de creacion: 13/04/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// función para double
double randomDouble(double min, double max) {
    return min + (double)rand() / RAND_MAX * (max - min);
}

// función para entero
int randomInt(int min, int max) {
    return min + rand() % (max - min + 1);
}

// función para char alfanumérico
char randomChar() {
    int tipo = rand() % 2;
    if (tipo == 0)
        return 'A' + rand() % 26;
    else
        return '0' + rand() % 10;
}

int main() {
    srand(time(NULL));

    double voltajes[100];
    double temperaturas[50];
    char caracteres[30];
    int anios[100];
    double velocidades[32];
    double distancias[1000];

    for(int i=0;i<100;i++) voltajes[i] = randomDouble(20,220);
    for(int i=0;i<50;i++) temperaturas[i] = randomDouble(0,100);
    for(int i=0;i<30;i++) caracteres[i] = randomChar();
    for(int i=0;i<100;i++) anios[i] = randomInt(1990,2025);
    for(int i=0;i<32;i++) velocidades[i] = randomDouble(10,300);
    for(int i=0;i<1000;i++) distancias[i] = randomDouble(1,1000);

    cout<<"Ejercicio 1 generado correctamente"<<endl;

    return 0;
}