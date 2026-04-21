#include <stdio.h>
#include <math.h>
#include <string.h>
/* comentarios */
int continuar=0;

struct Jugadores{
    char nombre[2][20];
    int victorias= 0;
    int derrotas= 0;
    int empates= 0;
    int partidasTotales= 0;
    int seleccion;
}

int resultadoParcial();
void resultadoFinal();

int main(){

    Jugadores a;
    Jugadores b;

    printf("Ingrese el nombre del Jugador uno: ");
    fgets(a.nombre, sizeof(a.nombre), stdin);
    a.nombre[strcspn(a.nombre,"\n")]= '\0';

    printf("Ingrese el nombre del Jugador dos: ");
    fgets(b.nombre, sizeof(b.nombre), stdin);
    b.nombre[strcspn(b.nombre, "\n")]= '\0';

do{
    printf("%s Seleccione 1 para piedra, 2 para papel o 3 para tijera : ", a.nombre);
    scanf("%d \n", &a.seleccion);

    printf("%s Seleccione 1 para piedra, 2 para papel o 3 para tijera : ", b.nombre);
    scanf("%d \n", &b.seleccion);

    resultadoParcial();

    a.partidasTotales ++;
    
    printf("Si desea seguir Jugando precione 1, de lo contrario preseione 0\n");
    scanf("%d", &continuar);

}while(continuar==0){
resultadoFinal();
}

    return 0;
}
int resultadoParcial(){
    if((a.seleccion==1)&&(b.seleccion==2)){
        printf("%s a ganado con piedra a %s que utilizo papel", b.nombre, a.nombre);      
        b.victoria++;  
        a.derrotas++;
    }else if((a.seleccion==1)&&(b.seleccion==3)){
        printf("%s a ganado con piedra a %s que utilizo tijera", a.nombre, b.nombre); 
        a.victoria++;  
        b.derrotas++;       
    }else if((a.seleccion==2)&&(b.seleccion==1)){
        printf("%s a ganado con papel a %s que utilizo piedra", a.nombre, b.nombre);    
        a.victoria++;  
        b.derrotas++;    
    }else if((a.seleccion==2)&&(b.seleccion==3)){
        printf("%s a ganado con tijera a %s que utilizo papel", b.nombre, a.nombre);
        b.victoria++;  
        a.derrotas++;        
    }else if((a.seleccion==3)&&(b.seleccion==1)){
        printf("%s a ganado con piedra a %s que utilizo tijera", b.nombre, a.nombre);  
        b.victoria++;  
        a.derrotas++;      
    }else if((a.seleccion==3)&&(b.seleccion==2)){
        printf("%s a ganado con tijera a %s que utilizo papel", a.nombre, b.nombre); 
        a.victoria++;  
        b.derrotas++;       
    }else{
        printf("Los dos jugadores han elegido %d por ende es un empate", a.seleccion);
        a.empate++;
        b.empate++;
    }
}

void resultadoFinal(){
    
}
