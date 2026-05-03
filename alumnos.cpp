#include <stdio.h>
#include <string.h>

struct Alumnos
{
    char nombre[20];    
    char apellido[20];
    int nota= 0;
};

Alumnos lista[100];

char info[100][10];
int i = 0;

void cargarAlumnos(){
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
scanf("%d", lista[i].nota);

int ch;
while(((ch = getchar()) != '\n') && ch != EOF){}

i++;}
}

void mostrarAlumnos(){
printf("%s" , info[i]);
}

void notaPromedio(){

}

int main(){



    return;
}