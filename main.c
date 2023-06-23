#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int elegirTamanio();
    int aleatorioVector(int min, int max);
    void cargarVector(int v[], int t);
    void mostrarVector(int v[], int t);
    void mostrarInvertido(int v[], int t);
    float mostrarPromedio(int v[], int t);


int main()
{
    srand(time(0));

    int tam = elegirTamanio();
    int vector[tam];

    cargarVector(vector, tam);
    mostrarVector(vector, tam);
    mostrarInvertido(vector, tam);
    mostrarPromedio(vector, tam);

    return 0 ;
};

 int elegirTamanio(){
    int t;
    do{
    printf("Ingresar un tamanio impar de dos cifras:\n");
    scanf("%d", &t);
    } while (t%2 == 0 || t >99 || t< 10);

 return t;
 };


int aleatorioVector(int min, int max){

 return min + rand()%(max-min+1);

 };

void cargarVector(int v[], int t){

    for (int i = 0 ; i<t; i++){

    v[i] = -(aleatorioVector(100,999));
 }

 };


void mostrarVector(int v[], int t){

 printf("|| ");
 for ( int i = 0; i< t; i++){

 printf("%d ", v[i]);

 }
 printf(" ||\n");

 };


 void mostrarInvertido(int v[], int t){
    printf("|| ");
    for ( int i = t-1; i> -1; i--){
    printf("%d ", v[i]);
    }
    printf(" ||\n");
 };


float mostrarPromedio(int v[], int t){

    int suma7 = 0;
    int contador = 0;
    float prom = 0;

    for ( int i = 0 ; i<t; i++){
        if ( v[i]%7==0){
        suma7+=v[i];
        contador++;
        }

    }

    if(contador != 0){
    prom = suma7/ ((float)contador);
    printf("\nPROM: %.2f",prom );
    }
    else{
    printf("No se puede calcular el promedio!!!");
    }
    printf("\n");
    return prom;
 };
