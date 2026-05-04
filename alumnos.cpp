#include <stdio.h>
#include <string.h>
#include <math.h>

struct Alumnos
{
    char nombre[20];    
    char apellido[20];
    int nota= 0;
};

Alumnos lista[100];

char info[100][80];
int i = 0;
int cantidad = 0;
float notaTotal= 0;


void CargarAlumnos();
void MostrarAlumnos();


int main(){

CargarAlumnos();
MostrarAlumnos();

    return 0;
}

void CargarAlumnos(){
while (1){
    printf("Coloque el nombre del alumno: ");
fgets(lista[i].nombre, sizeof(lista[i].nombre), stdin);
lista[i].nombre[strcspn(lista[i].nombre, "\n")] = '\0';

strcpy(info[i], lista[i].nombre);  

if (strcmp(lista[i].nombre, "0") == 0) break;


printf("Coloque el apellido del alumno: ");
fgets(lista[i].apellido, sizeof(lista[i].apellido), stdin);
lista[i].apellido[strcspn(lista[i].apellido, "\n")] = '\0';

strcpy(info[i], lista[i].apellido);  

printf("Coloca la nota del alumno: ");
scanf("%d", &lista[i].nota);

notaTotal += lista[i].nota;

sprintf(info[i], "%s %s %d", lista[i].nombre, lista[i].apellido, lista[i].nota);// Se convierte en string para guardarse posterior mente en info[i]
int ch;
while(((ch = getchar()) != '\n') && ch != EOF){}

cantidad ++;

i++;
}
float promedio = notaTotal / cantidad;

printf("Nota promedio fue %2f \n", promedio);
}


void MostrarAlumnos(){
     printf("\nLista en orden:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("%d) %s\n", i + 1, info[i]);
    }   
}