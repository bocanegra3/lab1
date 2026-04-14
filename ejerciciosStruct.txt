#include <stdio.h>
#include <string.h>

int opcion = 1;

int cantPasajeros= 0; // dato entero
float totalRecaudado= 0; // dato decimal
int cantJubilados = 0;
int cantMenores = 0;

struct Pasajero {
int edad;
float precio;
char nombre[20];
char destino[20];
};

int main() {
     
  Pasajero a;
  printf("si deseas cargar un pasajero ingrese 1 de lo contrario ingrese 0 para finalizar el programa:");    
    scanf("%d", &opcion);
  do{

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}

    printf("Ingrese nombre y apellido: ");
    fgets(a.nombre, sizeof(a.nombre), stdin);
    a.nombre[strcspn(a.nombre, "\n")] = '\0';   // quitar el salto de línea

    printf("Ingrese el destino del pasaje, sea 'N' ,'S' o 'D' las opciones disponibles: ");
    fgets(a.destino, sizeof(a.destino), stdin);
    a.destino[strcspn(a.destino, "\n")] = '\0';

    printf("Ingrese edad: ");
    scanf("%d", &a.edad);


    printf("Ingrese precio del pasaje: ");
    scanf("%f", &a.precio);

    if(a.edad>61){
      cantJubilados ++;
    }else if(a.edad<19){
      cantMenores ++;
    } 

    cantPasajeros ++;
    totalRecaudado = totalRecaudado + a.precio;

    printf("\n--- Datos cargados ---\n");
    printf("Nombre: %s\n", a.nombre);
    printf("Edad: %d\n", a.edad);
    printf("Precio pasaje: %.2f\n", a.precio);
    printf("destino %s\n", a.destino);

    printf("si deseas cargar un pasajero ingrese 1 de lo contrario ingrese 0 para finalizar el programa:");    
    scanf("%d", &opcion);

  }while (opcion == 1);
  {
    printf("La cantidad total de pasajeros es: %d \n", cantPasajeros);
    printf("La cantidad total recaudada es: %.2f \n", totalRecaudado);
    printf("La cantidad total de mayores es: %d \n", cantJubilados);
    if(a.edad <= 18 && a.precio >= 10000){
      printf("La cantidad de pasajeros menores que pagaron mas de 10mil es: %d \n", cantMenores);
    }
  }  
          
return 0;  


    }