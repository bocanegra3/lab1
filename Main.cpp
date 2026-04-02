#include <stdio.h>
#include <math.h>


int main() {
  int n, s, c;
  int edad, importe, opcion;
  int totalRecaudacion = 0, cantidadPasajeros = 0,cantidadPasajerosNeuquen=0,cantidadPasajerosSanpedro=0,cantidadPasajerosCapilla=0, pasajerosMayores = 0, recaudacionSanpedro, pasajerosMenores = 0,recaudacionNeuquen ,promedioNeuquen;
    do{
     printf("\n===== Selecciona el destino ====\n");
        printf("1)Su destino es Neuquen Capital (n) \n");
        printf("2)Su destino es San Pedro (s)\n");
         printf("3)Su destino es Capilla del Monte (c)\n");
          printf("4) Salir \n");
          printf("Elija una opcion: ");
           scanf("%d", &opcion);

           switch (opcion)
           {
           case 1:
           printf("ingrese su edad :");
           scanf("%d", &edad);
           printf("Ahora ingrese el importe :");
           scanf("%d", &importe);
           totalRecaudacion = totalRecaudacion + importe;
           cantidadPasajeros = cantidadPasajeros + 1;
           recaudacionNeuquen = recaudacionNeuquen + importe;
           cantidadPasajerosNeuquen = cantidadPasajerosNeuquen +1;
            if(edad>=60){ pasajerosMayores++;}
            if(edad<=18 && importe>10000){pasajerosMenores++;}

            break;
            case 2:
           printf("ingrese su edad :");
           scanf("%d", &edad);
           printf("Ahora ingrese el importe :");
           scanf("%d", &importe);
           totalRecaudacion = totalRecaudacion + importe;
           cantidadPasajeros = cantidadPasajeros + 1;
           recaudacionSanpedro = recaudacionSanpedro + importe;
            cantidadPasajerosSanpedro = cantidadPasajerosSanpedro +1;
            if(edad>=60){ pasajerosMayores++;}
             if(edad<=18 && importe>10000){pasajerosMenores++;}
            
            break;
            case 3:
           printf("ingrese su edad :");
           scanf("%d", &edad);
           printf("Ahora ingrese el importe :");
           scanf("%d", &importe);
           totalRecaudacion = totalRecaudacion + importe;
           cantidadPasajeros = cantidadPasajeros + 1;
            cantidadPasajerosCapilla = cantidadPasajerosCapilla +1;
           if(edad>=60){ pasajerosMayores++;}
            if(edad<=18 && importe>10000){pasajerosMenores++;}
            
            break;

            case 4:
            printf("Saliendo...\n");
            break;

            default:
            printf("Opcion invalida. Elija del 1 al 4. \n");
            break;
          }
          
        }while(opcion != 4);

         printf("cantidad de pasajeros total: %d monto recaudado: %d \n", cantidadPasajeros , totalRecaudacion);
         printf("lo recaudado a San Pedro es : %d\n", recaudacionSanpedro);
         printf("el promedio de importe por pasajero en Neuquen es:  %d\n", promedioNeuquen = recaudacionNeuquen/cantidadPasajerosNeuquen );
         printf("los viajeros mayores a 60 son: %d \n", pasajerosMayores);
         printf("los pasajeros menores que pagaron mas de 10mil son: %d\n", pasajerosMenores);

         if(cantidadPasajerosNeuquen >= 3){printf("la cantidad de pasajeros es mayor a 3");}
         if(cantidadPasajerosCapilla >= 3){printf("la cantidad de pasajeros es mayor a 3");}
         if(cantidadPasajerosSanpedro >= 3){printf("la cantidad de pasajeros es mayor a 3");}

          
          return 0;  

}

