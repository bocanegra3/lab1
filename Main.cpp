#include <stdio.h>
#include <math.h>

int main() {
int a, b, c;

printf("Coloca un valor entero : ");
scanf("%d", &a);
printf("Coloca otro segundo valor entero : ");
scanf("%d", &b);
printf("Coloca otro tercer valor entero : ");
scanf("%d", &c);

printf("los valores son: %d %d %d\n" , a , b , c);

if(a>b>c){
  printf("el orden correcto es %d %d %d \n" ,a ,b ,c);
}else if(b>a>c){
  printf("el orden correcto es %d %d %d \n" ,b ,a ,c);
}else if(c>a>b){
  printf("el orden correcto es %d %d %d \n" ,c ,a ,b);
}else if(b>c>a){
  printf("el orden correcto es %d %d %d \n" ,b ,c ,a);
}else if(c>b>a){
  printf("el orden correcto es %d %d %d \n" ,c ,b ,a);
}else if(a>c>b){
  printf("el orden correcto es %d %d %d \n" ,b ,a ,c);
}else{
  printf("no se que me falto");
}

    return 0;
}