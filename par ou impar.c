#include <stdio.h>

int main(){

int numero;

printf("Digite um numero: ");
scanf("%d", &numero);

if( numero % 2 == 0){
printf("\n");
printf("Numero Par");
}
else{
printf("\n");
printf("Numero Impar");
}
printf("\n\n");
return 0;
}
