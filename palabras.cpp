#include <stdio.h>
#include <string.h>
#include <math.h>

/* Ejercicio B: (3 puntos) 

Realizar un programa en C que solicite al usuario el ingreso de dos palabras.

El programa debe comparar ambas palabras y mostrar si son iguales o diferentes.

Luego debe repetir la comparación mientras el usuario indique que desea continuar.

Al finalizar la operación debe indicarse el resultado parcial de cada comparación (si eran iguales o no), y la cantidad de coincidencias y fallos

SALIDA:

 Conjunto de Palabras 1: Iguales

 Conjunto de Palabras 2: Diferentes

 Conjunto de Palabras 3: ....

Cantidad total de Aciertos: XX

Cantidad total de Errores:  XX

Como este trabajo se desarrolla íntegramente en PC el ejercicio será tomado en cuenta Si y Solo si el mismo compila sin errores, y puede utilizarse. */
int i = 0;
int palabrasCoincidentes=0;
int palabrasDistintas=0;

struct Comparacion
{
char palabrasUno[30];
char palabrasDos[30];
};

Comparacion lista[100];

void pedirPalabras();
void Comparar();

int main(){

pedirPalabras();
    
    return 0;
}

void Comparar(){
    if(strcmp(lista[i].palabrasUno,lista[i].palabrasDos)== 0)
    {
        palabrasCoincidentes ++;            
    }else{
        palabrasDistintas++;
    }
}

void pedirPalabras(){
    
    while(1){   
 printf("Coloca la primera palabra : ");
    fgets(lista[i].palabrasUno, sizeof(lista[i].palabrasUno), stdin);
    lista[i].palabrasUno[strcspn(lista[i].palabrasUno, "\n")] = '\0';

   
    if (strcmp(lista[i].palabrasUno, "0") == 0) break;

     printf("Coloca la segunda palabra : ");
    fgets(lista[i].palabrasDos, sizeof(lista[i].palabrasDos), stdin);
    lista[i].palabrasDos[strcspn(lista[i].palabrasDos, "\n")] = '\0';
       
    Comparar();

        i++;
    }

    printf("hay %d coincidencias \n", palabrasCoincidentes);
    printf("hay %d no coincidencias \n", palabrasDistintas);

}