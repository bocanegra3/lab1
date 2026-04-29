#include <stdio.h>

/* Ejercicio A: (3 puntos)


si es positivo o negativo
si es par o impar (utilizando el operador módulo % ) y si es mayor, menor o igual a 100.
Aclaración:}

(%) devuelve el resto de una división entera (por ejemplo, 7 % 2 da 1).

El programa debe usar if anidados y un ciclo con condición de salida clara.



Como este trabajo se desarrolla íntegramente en PC el ejercicio será tomado en cuenta Si y Solo si el mismo compila sin errores, y puede utilizarse.  */

void pedirNumeros();
int main(){

pedirNumeros();
    
    return 0;
}

void pedirNumeros(){
    int numeros;
    while(numeros != 0){
        printf("Se solicita numeros enteros: ");
        scanf("%d", &numeros);
        
        printf("Numero ingresado : %d \n", numeros);
    if(numeros % 2 == 0){if(numeros==0){}else{printf("El numero es par ");} }
    if(numeros % 2 != 0){printf("El numero es impar ");}
    if(numeros >= 1 ){printf("y es un numero positivo \n");}
    if(numeros <= -1 ){printf("y es un numero negativo \n");}


        if(numeros == 0){ break;}

        
    }
}