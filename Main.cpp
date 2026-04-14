#include <stdio.h>
int puedeIngresar(int edad);
void mostrarResultado(char nombre[], int edad);

int main() {
 char nombre[20];
 int edad;
 int opcion = 1;

 do{
    printf("Nombre: ");
 scanf("%s", &nombre);

 printf("Edad: ");
 scanf("%d", &edad);
}
while (opcion != 1);
{
 mostrarResultado(nombre, edad);
}

 return 0;
}

int puedeIngresar(int edad) {
 return edad >= 18;
}
void mostrarResultado(char nombre[], int edad) {
 if (puedeIngresar(edad)) {
 printf("%s puede ingresar\n", nombre);
 } else {
 printf("%s no puede ingresar\n", nombre);
 }
}


/* #include <stdio.h>
#include <string.h>

int opcion = 1;
struct Persona {
int edad[8];
char nombre[20];
};

 Persona a;
 

int puedeIngresar(int (a.edad));
int tipoIngreso(int (a.edad));
int mostrarResultado(char nombre, int edad);


int main() {
     
 
   printf("si deseas cargar un pasajero ingrese 1 de lo contrario ingrese 0 para finalizar el programa:");    
    scanf("%d", &opcion);
  
  do{

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}

    printf("Ingrese nombre: ");
    fgets(a.nombre, sizeof(a.nombre), stdin);
    a.nombre[strcspn(a.nombre, "\n")] = '\0';   // quitar el salto de línea


    printf("Ingrese edad: ");
    scanf("%d", &a.edad);

    printf("si deseas cargar un pasajero ingrese 1 de lo contrario ingrese 0 para finalizar el programa:");    
    scanf("%d", &opcion);
  
  
}while(opcion == 1);
{

}

  
return 0;  

}

int tipoIngreso(int (a.edad)){
    if(a.edad <= 12){
      return 1;
    }else if(a.edad>= 12 && a.edad<= 18){
       return 0;
        }else{
            return 2;
        }
}

void mostrarResultado{

} */