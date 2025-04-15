#include <stdio.h>

int main(){

int idade[10],peso[10],altura[10];
int i,PesoAltura=0, Idade10e30eAlt=0;
float MediaIdade;

for(i=0;i<10;i++){
    printf("\nDigite sua idade: ");
    scanf("%d", &idade[i]);

    printf("Digite seu peso em KG: ");
    scanf("%d", &peso[i]);
    printf("Digite sua altura em CM: ");
    scanf("%d", &altura[i]);
        if(peso[i]>90 && altura[i]<150){
            PesoAltura++;
        }
        if(idade[i] >= 10 && idade[i]<=30 && altura[i]>190){
            Idade10e30eAlt++;
        }
    }
    MediaIdade = (idade[0]+idade[1]+idade[2]+idade[3]+idade[4]+idade[5]+idade[6]+idade[7]+idade[8]+idade[9])/10;
    printf("\nMedia das idades: %.2f", MediaIdade);
    printf("\n\nQuantidade de pessoas com mais de 90kg e menos de 1,50m: %i", PesoAltura);
    printf("\n\nPorcentagem de pessoas entre 10 e 30 anos com mais de 1,90m: %i \n", Idade10e30eAlt*10);

return 0;
}
