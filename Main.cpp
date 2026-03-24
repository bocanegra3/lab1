#include <stdio.h>
#include <math.h>

int edad = 20;
float altura = 1.75;
double peso = 70.345678;
char inicial = 'A';
long long distancia = 1234567890;
int n = 42;

int edad2 = 0;

int main() {
printf("Edad: %d\n", edad);
printf("Altura: %f\n", altura);
printf("Peso: %lf\n", peso);
printf("Inicial: %c\n", inicial);
printf("Distancia: %lld\n", distancia);


printf("%d \n", n);
printf("%5d \n", n);
printf("%10d \n", n);

int edad;
printf("Ingrese edad: ");
scanf("%d", &edad);
float altura;
printf("Ingrese altura: ");
scanf("%f", &altura);
double peso;
printf("Ingrese peso: ");
scanf("%lf", &peso);
char inicial;
printf("Ingrese una letra: ");
scanf(" %c", &inicial);

printf("Edad: %d\n", edad);
printf("Altura: %f\n", altura);
printf("Peso: %lf\n", peso);
printf("Inicial: %c\n", inicial);

printf("Edad Dos: " , edad2);
scanf("%d", &edad2);
printf("la edad dos es : %d\n", edad2);
printf("La suma de las edades es %d\n", edad + edad2);

int numero;
printf("Ingrese numero: ");
scanf("%d", &numero);
printf("Mayor que 10: %d\n", numero > 10);
printf("Igual a 0: %d\n", numero == 0);
printf("Distinto de 5: %d\n", numero != 5);

if(edad < edad2){
  printf("la segunda persona es mayor");
  return 0;
}else{
  printf("la segunda persona es menor");
}

  return 0;
}