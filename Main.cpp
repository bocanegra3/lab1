#include <stdio.h>
#include <ctype.h>
#include <string.h>
/* comentarios */
/* Control de gimnasio/ */
/* ingreso de personas para una promo por dia. */
int importe = 0;
struct Persona{
    char nombre[20];
    int edad;
    char pase[3]={'S','N','D'};
}


int main(){
 Persona lista[100];
    do{
        printf("ingrese su nombre: ");
        fgets(lista[n].nombre, sizeof(lista[n].nombre), stdin);
        lista[n].nombre[strcspn(lista[n].nombre "\n")] = '\0';
        printf("Ingrese su edad: ");

        scanf("%d\n", &lista[n].edad);

        do
        {
            printf("ingrese el tipo de pase");
            scanf("%c \n", &lista[n].pase);
            if ((lista[n].pase != 'D') && (lista[n].pase != 'S') && (lista[n].pase != 'M'))
            {
                printf("Usted no ingreso ninguna de las consonantes validas");
            }
        } while ((lista[n].pase != 'D') && (lista[n].pase != 'S') && (lista[n].pase != 'M'));{
        if (lista[n].pase == 'D')
        {
            (importe = importe + 2000);
        }
        else if (lista[n].pase == 'S')
        {
            (importe = importe + 10000);
        }
        else if (lista[n].pase == 'M')
        {
            (importe = importe + 35000);
        }

        n++;
    } while (lista[n].nombre == "fin"){
        printf("el importe total de la semana es %d\n", importe);
    }
}

    return 0;
}