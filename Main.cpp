#include <stdio.h>
#include <string.h>
    int i= 0;
    int prioridadAlta=0;
    int prioridadBaja=0;
    int cantVehiculos=0;

struct Vehiculo{
   char patente[20];
   int prioridad;
   char descripcion_trabajo[33];
   float valor_trabajo;

};

Vehiculo lista[100];

int tipoPrioridad(int prioridad);
void busqueda();
void logicaControl(int prioridad, int valor_trabajo);
void cargarVehiculos();


int main(){

    cargarVehiculos();   
    busqueda();
    logicaControl(prioridadAlta,prioridadBaja);

    return 0;
}

void logicaControl(int prioridad, int valor_trabajo){    

   for(int i=0; i <= cantVehiculos; i++){
     int t = tipoPrioridad(lista[i].prioridad);

    if((t == 0) && (lista[i].valor_trabajo >= 2000)){
        prioridadAlta ++;
    }
    if((t == 2) && (lista[i].valor_trabajo >= 1000)){
        prioridadBaja ++;
    }
   }

    printf("Hay %d Vehiculos de prioridad Alta que pagan mas de 2000 \n y %d Vehiculos de prioridad Baja que pagan mas que 1000 \n", prioridadAlta, prioridadBaja);
}

int tipoPrioridad(int prioridad){
    
    if(lista[i].prioridad == 1){return 0;}
    if(lista[i].prioridad == 2){return 1;}
    if(lista[i].prioridad == 3){return 2;}

    return -1;
}

void busqueda(){ 
    int mayorPresupuesto= lista[0].valor_trabajo;
    int IDxMayor= 0;
    for(int i = 0; i <= cantVehiculos ; i++){         
         if(mayorPresupuesto <= lista[i].valor_trabajo){
            mayorPresupuesto = lista[i].valor_trabajo;
            IDxMayor= i;
         } 
        }
    printf("Patente: %s\n", lista[IDxMayor].patente);
    printf("Descripcion: %s\n", lista[IDxMayor].descripcion_trabajo);    
    }

void cargarVehiculos(){

while (1) {
    printf("Carga la patente del auto por favor : ");
    fgets(lista[i].patente, sizeof(lista[i].patente), stdin);
    lista[i].patente[strcspn(lista[i].patente, "\n")] = '\0';

    if (strcmp(lista[i].patente, "0") == 0) break;

    printf("Coloca una breve descripcion del trabajo por favor : ");
    fgets(lista[i].descripcion_trabajo, sizeof(lista[i].descripcion_trabajo), stdin);
    lista[i].descripcion_trabajo[strcspn(lista[i].descripcion_trabajo, "\n")] = '\0';

    printf("Coloca el tipo de prioridad del trabajo \n Coloque 1(alta), 2(media) o 3(baja) : ");
    scanf("%d", &lista[i].prioridad);

    tipoPrioridad(lista[i].prioridad);

    printf("Coloca el valor del trabajo: ");
    scanf("%2f", &lista[i].valor_trabajo);

    int ch;
    while(((ch = getchar()) != '\n') && ch != EOF){}
    // una vez que termina de cargar datos y precionan el 0 pasa a la siguiente funcion;
    i++;
    cantVehiculos++;
}
}