#include <stdio.h>

int main(){


float nota1 , nota2;

printf("Digite sua primeira nota: ");
scanf ("%f", &nota1);
printf ("\n");
printf("Nota 1: ");
printf("%.2f", nota1);

printf("\n\n");

printf("Digite sua segunda nota: ");
scanf ("%f", &nota2);
printf ("\n");
printf("Nota 2: ");
printf("%.2f" , nota2);

printf("\n\n");

printf("Media: ");
printf("%.2f" , (nota1+nota2)/2 );

float media = (nota1+nota2)/2;

printf("\n\n");

if (media < 6) printf("Reprovado");
if (media >= 6) printf ("Aprovado!");

printf("\n\n");

printf("Feito por Enzima01");

printf("\n\n");

return 0;
}
