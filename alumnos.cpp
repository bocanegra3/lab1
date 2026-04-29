#include <stdio.h>
#include <string.h>

struct Alumnos
{
    char nombre[20];    
    char apellido[20];
    int nota= 0;
};

Alumnos lista[100];

int i= 0;

void cargarAlumnos(){
printf("Coloque el nombre del alumno: ");
fgets(lista[i].nombre, sizeof(lista[i].nombre), stdin);
lista[i].nombre[strcspn(lista[i].nombre, "\n")] = '\0';

printf("Coloque el apellido del alumno: ");
fgets(lista[i].apellido, sizeof(lista[i].apellido), stdin);
lista[i].apellido[strcspn(lista[i].apellido, "\n")] = '\0';

printf("Coloca la nota del alumno: ");
scanf("%d", lista[i].nota);

int ch;
while(((ch = getchar()) != '\n') && ch != EOF){}

}
void mostrarAlumnos(){

}

void notaPromedio(){

}

int main(){



    return;
}