#include <stdio.h>
#include <stdlib.h>

int main(){

float peso,altura, imc;

printf("Digite sua altura (M): ");
scanf("%f", &altura);
printf("\n");

printf("Digite seu peso (Kg): ");
scanf("%f", &peso);
printf("\n");

imc = peso/(altura * altura);

printf("IMC: ");
printf("%.2f", imc);
printf("\n\n");

if (imc < 18.5 ){
    printf("Baixo Peso\n\n");
}
else if (imc >= 18.5 && imc < 25){
    printf("Peso Adequado\n");
}
else if (imc >= 25 && imc <30){
    printf("Sobrepeso\n");
}
else if (imc >= 30 && imc < 35){
    printf("Obesidade Grau 1\n");
}
else if (imc >= 35 && imc < 40){
    printf("Obesidade Grau 2\n");
}
else if (imc >= 40){
    printf("Obesidade Grau 3\n");
}
return 0;
}
