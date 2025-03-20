#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");


    srand((unsigned int) time(NULL));

    int funcao , operacao_calc , operacao_unimedida , operacao_temperatura , operacao_velocidade, operacao_comprimento, operacao_peso;
    int celsius_1, fahrenheit_1, kelvin_1;
    float kmh, ms , mph;
    float km, m , cm;
    float kg , g , mg;
    float n1 , n2 , resultado;
    float peso,altura, imc;
    int numero, equacao, easteregg;
    int sorteio = rand() % 2;
    char letra;
    char resposta;
    float a, b, c, delta, x, x1 ,x2;
    float a1, b1, xeq1;

    inicio:

    printf("       ______\n");
    printf("    .-'      `-.\n");
    printf("   /            \\\n");
    printf("  |              |\n");
    printf("  |,  .-.  .-.  ,|\n");
    printf("  | )(_o/  \\o_)( |\n");
    printf("  |/     /\\     \\|\n");
    printf("  (_     ^^     _)\n");
    printf("   \\__|IIIIII|__/\n");
    printf("    | \\IIIIII/ |\n");
    printf("    \\          /\n");
    printf("     `--------`\n");
    printf("  ____  _  ___   _ _     _____  \n");
    printf(" / ___|| |/ / | | | |   |__  /  \n");
    printf(" \\___ \\| ' /| | | | |     / /   \n");
    printf("  ___) | . \\| |_| | |___ / /_   \n");
    printf(" |____/|_|\\_\\\\___/|_____/____|  \n");

    printf(" \n\nAperter ENTER para iniciar...");
    getchar();
    system("cls");



    printf("  ____  _  ___   _ _     _____  \n");
    printf(" / ___|| |/ / | | | |   |__  /  \n");
    printf(" \\___ \\| ' /| | | | |     / /   \n");
    printf("  ___) | . \\| |_| | |___ / /_   \n");
    printf(" |____/|_|\\_\\\\___/|_____/____|  by Enzima01\n\n\n");
    printf(" 1) CALCULADORA \n\n");
    printf(" 2) CONVERSOR DE MEDIDAS\n\n");
    printf(" 3) ÍNDICE DE MASSA CORPORAL (IMC)\n\n");
    printf(" 4) CHUTE PARA ALTERNATIVAS\n\n");
    printf(" 5) SIM OU NÃO\n\n");
    printf("Digite o número para a determinada função: ");
    scanf("%d" , &funcao);



if(funcao == 1){

        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf("| CALCULADORA | \n \n");
        printf(" 1) SOMA \n\n" );
        printf(" 2) SUBTRAÇÃO \n\n");
        printf(" 3) MULTIPLICAÇÃO \n\n");
        printf(" 4) DIVISÃO \n\n");
        printf(" 5) EQUAÇÕES \n\n");

        printf("Digite o número (1-4) para a determinada operação: ");
        scanf("%d" , &operacao_calc);
}

        if (operacao_calc == 1){

        system("cls");
        printf(" | SOMA |\n\n");
        printf(" Digite o primeiro número: ");
        scanf("%f",&n1);
        printf("\n Digite o segundo número: ");
        scanf("%f",&n2);
        resultado = n1 + n2;
        printf("\n------------------");
        printf("\n RESULTADO: %.2f" , resultado);
        printf("\n------------------");
        }

        if (operacao_calc == 2){
        system("cls");
        printf(" | SUBTRAÇÃO |\n\n");
        printf(" Digite o primeiro número: ");
        scanf("%f",&n1);
        printf("\n Digite o segundo número: ");
        scanf("%f",&n2);
        resultado = n1 - n2;
        printf("\n------------------");
        printf("\n RESULTADO: %.2f" , resultado);
        printf("\n------------------");
        }

        if (operacao_calc == 3){
        system("cls");
        printf(" | MULTIPLICACÃO | \n\n");
        printf(" Digite o primeiro número: ");
        scanf("%f",&n1);
        printf("\n Digite o segundo número: ");
        scanf("%f",&n2);
        resultado = n1 * n2;
        printf("\n------------------");
        printf("\n RESULTADO: %.2f" , resultado);
        printf("\n------------------");
        }

        if (operacao_calc == 4){
        system("cls");
        printf(" | DIVISÃO | \n\n");
        printf(" Digite o primeiro número: ");
        scanf("%f",&n1);
        printf("\n Digite o segundo número: ");
        scanf("%f",&n2);
        resultado = n1 / n2;
        printf("\n------------------");
        printf("\n RESULTADO: %.2f" , resultado);
        printf("\n------------------");
        }

        if(operacao_calc == 5){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf(" | EQUAÇÕES |\n\n");
            printf(" 1) EQUAÇÃO DO 1 GRAU\n\n");
            printf(" 2) EQUAÇÃO DO 2 GRAU\n\n");
            printf("Digite o número (1-2) para a determinada operação: ");
            scanf("%d", &equacao);
            if(equacao == 1){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf(" | EQUAÇÃO DO 1 GRAU |\n\n");
                printf(" Digite o valor de A: ");
                scanf("%f", &a1);
                printf("\n Digite o valor de B: ");
                scanf("%f", &b1);
                if (a1 == 0) {
                    if (b1 == 0) {
                    printf("A equação tem infinitas soluções\n");
                    }   else {
                            printf("A equação não tem solução!\n");
                        }
                }           else {
                                xeq1 = -b1 / a1;
                                printf("\n Ax + B = 0\n");
                                printf("\n X = - B / A\n");
                                printf("\n X = - %.2f / %.2f\n\n", b1,a1);
                                printf(" X = %.2f\n", xeq1);
                            }
            }
            if(equacao == 2){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf(" | EQUAÇÃO DO 2 GRAU |\n\n");
                printf(" Digite o valor de A: ");
                scanf("%f", &a);
                if(a  == 0){
                printf("\n\n Imposível calcular! A negativo!!");
                }
            else{
                printf("\n Digite o valor de B: ");
                scanf("%f", &b);
                printf("\n Digite o valor de C: ");
                scanf("%f", &c);
                printf("\n==============================\n");
                printf("        | BHASKARA |\n");
                delta = (b * b) -4 * a * c;
                printf("\n (B * B) -4 * A * C");
                printf("\n\n (%.2f * %.2f) -4 * %.2f * %.2f\n" , b, b, a, c);

            if(delta < 0){
            printf("\n Delta = %.2f", delta);
            printf("\n\n Imposível calcular! Delta negativo!!");
            }
            else{
                printf("\n Delta é igual a: %.2f", delta);
                printf("\n\n==============================\n");
                printf("   | DESCOBRIR AS RAÍZES |\n");
                printf("\n X = (-B +- raiz de Delta) / 2 * A\n");
                printf("\n X = (- %.2f +- raiz de %2.f) / 2 * %.2f", b, delta, a);
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("\n\n X1 = %.2f", x1);
                printf("\n\n X2 = %.2f", x2);
            }
            }

            }
        }

if(funcao == 2){
    system("cls");
    printf("  ____  _  ___   _ _     _____  \n");
    printf(" / ___|| |/ / | | | |   |__  /  \n");
    printf(" \\___ \\| ' /| | | | |     / /   \n");
    printf("  ___) | . \\| |_| | |___ / /_   \n");
    printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
    printf("| CONVERSOR DE MEDIDAS |\n\n");
    printf(" 1) TEMPERATURA \n\n");
    printf(" 2) VELOCIDADE \n\n");
    printf(" 3) COMPRIMENTO \n\n");
    printf(" 4) PESO \n\n");
    printf("Digite o número (1-4) para a determinada operação: ");
    scanf("%d" , &operacao_unimedida);
}
if(operacao_unimedida == 1){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf("| CONVERSOR DE TEMPERATURA | \n\n\n");

        printf("          |CELSIUS(°C)|\n");
        printf(" -----------------------------------");
        printf("\n 1) Celsius(°C) --> Fahrenheit(°F)\n");
        printf("\n 2) Celsius(°C) --> Kelvin(K)\n");
        printf(" -----------------------------------\n\n");

        printf("          |FAHRENHEIT(°F)|\n");
        printf(" -----------------------------------\n");
        printf(" 3) Fahrenheit(°F) --> Celsius(°C)\n");
        printf("\n 4) Fahrenheit(°F) --> Kelvin(K)\n");
        printf(" -----------------------------------\n\n");

        printf("            |KELVIN(K)|\n");
        printf(" -----------------------------------\n");
        printf(" 5) Kelvin(K) --> Celsius(°C) \n");
        printf("\n 6) Kelvin(K) --> Fahrenheit(°F)\n");
        printf(" -----------------------------------\n\n");

        printf("Digite o número (1-6) para a determinada operação: ");
        scanf("%d" , &operacao_temperatura);

}
        if(operacao_temperatura == 1){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Celsius(°C) --> Fahrenheit(°F) |\n\n");
            printf(" Digite o valor da temperatura (°C): ");
            scanf("%d", &celsius_1);
            fahrenheit_1 = (celsius_1 * 9/5) + 32;
            printf("\n-----------------------------");
            printf("\n VALOR EM FAHRENHEIT: %d°F",fahrenheit_1);
            printf("\n-----------------------------");
        }

        if(operacao_temperatura == 2){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Celsius(°C) --> Kelvin(K) |\n\n");
            printf(" Digite o valor da temperatura (°C): ");
            scanf("%d", &celsius_1);
            kelvin_1 = celsius_1 + 273;
            printf("\n-----------------------------");
            printf("\n VALOR EM KELVIN: %dK",kelvin_1);
            printf("\n-----------------------------");
        }

        if(operacao_temperatura == 3){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Fahrenheit(°F) --> Celsius(°C) |\n\n");
            printf(" Digite o valor da temperatura (°F): ");
            scanf("%d", &fahrenheit_1);
            celsius_1 = (fahrenheit_1 - 32) * 5/9;
            printf("\n-----------------------------");
            printf("\n VALOR EM CELSIUS: %d°C",celsius_1);
            printf("\n-----------------------------");

        }

        if(operacao_temperatura == 4){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Fahrenheit(°F) --> Kelvin(K) |\n\n");
            printf(" Digite o valor da temperatura (°F): ");
            scanf("%d", &fahrenheit_1);
            kelvin_1 = (fahrenheit_1 - 32) * 5/9 + 273;
            printf("\n-----------------------------");
            printf("\n VALOR EM KELVIN: %d°K",kelvin_1);
            printf("\n-----------------------------");

        }

        if(operacao_temperatura == 5){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Kelvin(K) --> Celsius(°C) |\n\n");
            printf(" Digite o valor da temperatura (K): ");
            scanf("%d", &kelvin_1);
            celsius_1 = kelvin_1 - 273;
            printf("\n-----------------------------");
            printf("\n VALOR EM CELSIUS: %d°C",celsius_1);
            printf("\n-----------------------------");

        }

        if(operacao_temperatura == 6){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Kelvin(K) --> Fahrenheit(°F) |\n\n");
            printf(" Digite o valor da temperatura (K): ");
            scanf("%d", &kelvin_1);
            fahrenheit_1 = (kelvin_1 - 273) * 9/5 + 32;
            printf("\n-----------------------------");
            printf("\n VALOR EM FAHRENHEIT: %d°F",fahrenheit_1);
            printf("\n-----------------------------");

        }

if(operacao_unimedida == 2){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf("| CONVERSOR DE VELOCIDADE | \n\n\n");

        printf("                          |KM/H|");
        printf(" \n------------------------------------------------------------");
        printf("\n 1) Quilômetros por hora (Km/h) --> Metros por segundo (m/s)\n\n");
        printf(" 2) Quilômetros por hora (Km/h) --> Milhas por hora (mph)\n");
        printf(" ------------------------------------------------------------\n\n");

        printf("                           |M/S|");
        printf(" \n------------------------------------------------------------");
        printf("\n 3) Metros por segundo (m/s) --> Quilômetros por hora (Km/h)\n\n");
        printf(" 4) Metros por segundo (m/s) --> Milhas por hora (mph)\n");
        printf(" ------------------------------------------------------------\n\n");

        printf("                           |MPH|");
        printf(" \n------------------------------------------------------------");
        printf("\n 5) Milhas por hora (mph) --> Quilômetros por hora (Km/h)\n\n");
        printf(" 6) Milhas por hora (mph) --> Metros por segundo (m/s)\n");
        printf(" ------------------------------------------------------------\n\n");

        printf("Digite o número (1-6) para a determinada operação: ");
        scanf("%d" , &operacao_velocidade);

        if(operacao_velocidade == 1){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Quilômetros por hora (Km/h) --> Metros por segundo (m/s) |\n\n");
            printf(" Digite o valor da velocidade (Km/h): ");
            scanf("%f", &kmh);
            ms = kmh / 3.6;
            printf("\n----------------------------------------");
            printf("\n VALOR EM METROS POR SEGUNDO: %.2f m/s", ms);
            printf("\n----------------------------------------");
        }

        if(operacao_velocidade == 2){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Quilômetros por hora (Km/h) --> Milhas por hora (mph) |\n\n");
            printf(" Digite o valor da velocidade (Km/h): ");
            scanf("%f", &kmh);
            mph = kmh/1.609;
            printf("\n----------------------------------------");
            printf("\n VALOR EM MILHAS POR SEGUNDO: %.2f mph", mph);
            printf("\n----------------------------------------");
        }

        if(operacao_velocidade == 3){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Metros por segundo (m/s) --> Quilômetros por hora (Km/h) |\n\n");
            printf(" Digite o valor da velocidade (m/s): ");
            scanf("%f", &ms);
            kmh = ms * 3.6;
            printf("\n--------------------------------------------");
            printf("\n VALOR EM QUILÔMETROS POR HORAS: %.2f Km/h", kmh);
            printf("\n--------------------------------------------");

        }

         if(operacao_velocidade == 4){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Metros por segundo (m/s) --> Milhas por hora (mph) |\n\n");
            printf(" Digite o valor da velocidade (m/s): ");
            scanf("%f", &ms);
            mph = ms * 2.237;
            printf("\n----------------------------------------");
            printf("\n VALOR EM MILHAS POR SEGUNDO: %.2f mph", mph);
            printf("\n----------------------------------------");
         }

         if(operacao_velocidade == 5){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Milhas por hora (mph) --> Quilômetros por hora (Km/h) |\n\n");
            printf(" Digite o valor da velocidade (mph): ");
            scanf("%f", &mph);
            kmh = mph * 1.609;
            printf("\n--------------------------------------------");
            printf("\n VALOR EM QUILÔMETROS POR HORAS: %.2f Km/h", kmh);
            printf("\n--------------------------------------------");
        }

        if(operacao_velocidade == 6){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Milhas por hora (mph) --> Metros por segundo (m/s)| \n\n");
            printf(" Digite o valor da velocidade (mph): ");
            scanf("%f", &mph);
            ms = mph / 2.237;
            printf("\n----------------------------------------");
            printf("\n VALOR EM METROS POR SEGUNDO: %.2f m/s", ms);
            printf("\n----------------------------------------");
        }
}


if (operacao_unimedida == 3) {
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| CONVERSOR DE COMPRIMENTO | \n\n\n");
            printf("                   |KM|");
            printf("\n------------------------------------------\n");
            printf(" 1) Quilômetros (km) --> Metros (m)\n\n");
            printf(" 2) Quilômetros (km) --> Centímetros (cm)");
            printf("\n------------------------------------------\n\n");

            printf("                   |M|");
            printf("\n------------------------------------------\n");
            printf(" 3) Metros (m) --> Quilômetros (km)\n\n");
            printf(" 4) Metros (m) --> Centímetros (cm)");
            printf("\n------------------------------------------\n\n");

            printf("                   |CM|");
            printf("\n------------------------------------------\n");
            printf(" 5) Centímetros (cm) --> Quilômetros (km)\n\n");
            printf(" 6) Centímetros (cm) --> Metros (m)");
            printf("\n------------------------------------------\n\n");

            printf("Digite o número (1-6) para a determinada operação: ");
            scanf("%d" , &operacao_comprimento);
}
            if(operacao_comprimento == 1){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Quilômetros (km) --> Metros (m) |\n\n");
                printf(" Digite o valor do comprimento (km): ");
                scanf("%f", &km);
                m = km * 1000;
                printf("\n-----------------------------");
                printf("\n VALOR EM METROS: %.2f m",m);
                printf("\n-----------------------------");
            }

            if(operacao_comprimento == 2){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Quilômetros (km) --> Centímetros (cm) |\n\n");
                printf(" Digite o valor do comprimento (km): ");
                scanf("%f", &km);
                cm = km * 100000;
                printf("\n------------------------------------");
                printf("\n VALOR EM CENTÍMETROS: %.2f cm",cm);
                printf("\n------------------------------------");
            }

            if(operacao_comprimento == 3){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Metros (m) --> Quilômetros (km) |\n\n");
                printf(" Digite o valor do comprimento (m): ");
                scanf("%f", &m);
                km = m / 1000;
                printf("\n------------------------------------");
                printf("\n VALOR EM QUILÔMETROS: %.2f km",km);
                printf("\n------------------------------------");

            }

            if(operacao_comprimento == 4){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Metros (m) --> Centímetros (cm) |\n\n");
                printf(" Digite o valor do comprimento (m): ");
                scanf("%f", &m);
                cm = m * 100;
                printf("\n------------------------------------");
                printf("\n VALOR EM CENTÍMETROS: %.2f cm",cm);
                printf("\n------------------------------------");
            }

            if(operacao_comprimento == 5){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Centímetros (cm) --> Quilômetros (km) |\n\n");
                printf(" Digite o valor do comprimento (cm): ");
                scanf("%f", &cm);
                km = cm / 100000;
                printf("\n------------------------------------");
                printf("\n VALOR EM QUILÔMETROS: %.2f km",km);
                printf("\n------------------------------------");
            }

            if(operacao_comprimento == 6){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Centímetros (cm) --> Metros (m) |\n\n");
                printf(" Digite o valor do comprimento (cm): ");
                scanf("%f", &cm);
                m = cm / 100;
                printf("\n-----------------------------");
                printf("\n VALOR EM METROS: %.2f m",m);
                printf("\n-----------------------------");
            }

if (operacao_unimedida == 4){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf("| CONVERSOR DE PESO | \n\n\n");

        printf("                  |KG|");
        printf("\n-----------------------------------------\n");
        printf(" 1) Quilograma (kg) --> Grama (g)\n");
        printf("\n 2) Quilograma (kg) --> Miligrama (mg)");
        printf("\n-----------------------------------------\n\n");

        printf("                  |G|");
        printf("\n-----------------------------------------\n");
        printf(" 3) Grama (g) --> Quilograma (kg)\n");
        printf("\n 4) Grama (g) --> Miligrama (mg)");
        printf("\n-----------------------------------------\n\n");

        printf("                  |MG|");
        printf("\n-----------------------------------------\n");
        printf(" 5) Miligrama (mg) --> Quilograma (kg)\n");
        printf("\n 6) Miligrama (mg) --> Grama (g)");
        printf("\n-----------------------------------------\n\n");

        printf("Digite o número (1-6) para a determinada operação: ");
        scanf("%d" , &operacao_peso);

        if(operacao_peso == 1){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Quilograma (kg) --> Grama (g) |\n\n");
            printf(" Digite o valor do peso (kg): ");
            scanf("%f", &kg);
            g = kg * 1000;
            printf("\n-----------------------------");
            printf("\n VALOR EM GRAMA: %.2f g",g);
            printf("\n-----------------------------");
        }

        if(operacao_peso == 2){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Quilograma (kg) --> Miligrama (mg) |\n\n");
            printf(" Digite o valor do peso (kg): ");
            scanf("%f", &kg);
            mg = kg * 1000000;
            printf("\n----------------------------------");
            printf("\n VALOR EM MILIGRAMA: %.2f mg",mg);
            printf("\n----------------------------------");
        }

        if(operacao_peso == 3){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Grama (g) --> Quilograma (kg) | \n\n");
            printf(" Digite o valor do peso (g): ");
            scanf("%f", &g);
            kg = g / 1000;
            printf("\n-------------------------------");
            printf("\n VALOR EM QUILOGRAMA: %.3f kg",kg);
            printf("\n-------------------------------");
        }

        if(operacao_peso == 4){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Grama (g) --> Miligrama (mg) |\n\n");
            printf(" Digite o valor do peso (g): ");
            scanf("%f", &g);
            mg = g * 1000;
            printf("\n----------------------------------");
            printf("\n VALOR EM MILIGRAMA: %.2f mg",mg);
            printf("\n----------------------------------");
        }

        if(operacao_peso == 5){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Miligrama (mg) --> Quilograma (kg) |\n\n");
            printf(" Digite o valor do peso (mg): ");
            scanf("%f", &mg);
            kg = mg * 1000000;
            printf("\n-------------------------------");
            printf("\n VALOR EM QUILOGRAMA: %.2f kg",kg);
            printf("\n-------------------------------");
        }

        if(operacao_peso == 6){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Miligrama (mg) --> Grama (g) |\n\n");
            printf(" Digite o valor do peso (mg): ");
            scanf("%f", &mg);
            g = mg / 1000;
            printf("\n-----------------------------");
            printf("\n VALOR EM GRAMA: %.2f g",g);
            printf("\n-----------------------------");
        }

}

if(funcao == 3){
    system("cls");
    printf("  ____  _  ___   _ _     _____  \n");
    printf(" / ___|| |/ / | | | |   |__  /  \n");
    printf(" \\___ \\| ' /| | | | |     / /   \n");
    printf("  ___) | . \\| |_| | |___ / /_   \n");
    printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
    printf("| CALCULO IMC |\n\n");
    printf("Digite sua altura (M): ");
    scanf("%f", &altura);
    printf("\n");

    printf("Digite seu peso (Kg): ");
    scanf("%f", &peso);
    imc = peso/(altura * altura);
    printf("\n----------------------\n");
    printf(" IMC: ");
    printf("%.2f\n", imc);

    if (imc < 18.5 ){
    printf("\n----------------------\n");
    printf("\n Baixo Peso\n");
    }
    else if (imc >= 18.5 && imc < 25){
    printf("\n Peso Adequado\n");
    printf("----------------------\n");
    }
    else if (imc >= 25 && imc <30){
    printf("\n Sobrepeso\n");
    printf("----------------------\n");
    }
    else if (imc >= 30 && imc < 35){
    printf("\n Obesidade Grau 1\n");
    printf("----------------------\n");
    }
    else if (imc >= 35 && imc < 40){
    printf("\n Obesidade Grau 2\n");
    printf("----------------------\n");
    }
    else if (imc >= 40){
    printf("\n Obesidade Grau 3\n");
    printf("----------------------\n");
    }
}

if(funcao == 4){
    system("cls");
    printf("  ____  _  ___   _ _     _____  \n");
    printf(" / ___|| |/ / | | | |   |__  /  \n");
    printf(" \\___ \\| ' /| | | | |     / /   \n");
    printf("  ___) | . \\| |_| | |___ / /_   \n");
    printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
    printf(" | CHUTAR ALTERNATIVAS |\n\n");
    int numero;
            printf(" Quantas alternativas tem a questão?: ");
            scanf("%d", &numero);
            int sorteio = 1 + (rand() % numero);
            printf("\n Número sorteado: %d\n", sorteio);
    }


if(funcao == 5){
    system("cls");
    printf("  ____  _  ___   _ _     _____  \n");
    printf(" / ___|| |/ / | | | |   |__  /  \n");
    printf(" \\___ \\| ' /| | | | |     / /   \n");
    printf("  ___) | . \\| |_| | |___ / /_   \n");
    printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
    printf(" | SIM ou NÃO |\n\n");
    int sorteio = rand() % 2;
            printf(sorteio == 0 ? "      SIM\n" : "      NÃO\n");

}


printf("\n=====================================");
printf("\n Fim do programa...\n");
printf("\n Deseja voltar ao início? (s/n): ");
scanf(" %c", &resposta);
printf("\n=====================================\n\n");
printf(" ==========================");
printf("\n | SKULZ made by Enzima01 |\n");
printf(" ==========================");

if (resposta == 's' || resposta == 'S'){
    goto inicio;
}
else{
    printf("\n\n");
    scanf("%d", &easteregg);
    if(easteregg == 01){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  SECRET!!! \n\n\n");
        #define EMPTY ' '
        #define PLAYER1 'O'
        #define PLAYER2 'X'
        #define SIZE 3

        void printBoard(char board[SIZE][SIZE]) {
            setlocale(LC_ALL, "Portuguese_Brazil.1252");
            printf("\n");
            for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == EMPTY) {
                printf("|%d", (i * SIZE + j + 1));
            }       else {
                        printf("|%c", board[i][j]);
                    }
            }
            printf("|\n");
            }
            printf("\n");
            }

        int checkWin(char board[SIZE][SIZE], char player) {
        for (int i = 0; i < SIZE; i++) {
            if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1;
            }
        }
        if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
        }
        return 0;
        }

        int checkDraw(char board[SIZE][SIZE]) {
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (board[i][j] == EMPTY) {
                    return 0;
                }
            }
        }
        return 1;
        }

        char JogarNovamente;

        do {
            char board[SIZE][SIZE] = {
            {EMPTY, EMPTY, EMPTY},
            {EMPTY, EMPTY, EMPTY},
            {EMPTY, EMPTY, EMPTY}
            };
            char jogador1[50], jogador2[50];
            srand(time(NULL));

            printf("       | JOGO DA VELHA |\n\n");

            printf("Digite o nome do Jogador 1 (O): ");
            scanf("%49s", jogador1);
            printf("Digite o nome do Jogador 2 (X): ");
            scanf("%49s", jogador2);

            int currentPlayer = rand() % 2;
            char currentSymbol = currentPlayer == 0 ? PLAYER1 : PLAYER2;

            int position;

            while (1) {
            printBoard(board);
            printf("Vez de %s (%c). Digite um número de 1 a 9 para a sua jogada: ", currentPlayer == 0 ? jogador1 : jogador2, currentSymbol);
            scanf("%d", &position);

            int row = (position - 1) / SIZE;
            int col = (position - 1) % SIZE;

            if (position < 1 || position > 9 || board[row][col] != EMPTY) {
                printf("Movimento inválido! Tente novamente.\n");
                continue;
            }
                board[row][col] = currentSymbol;

            if (checkWin(board, currentSymbol)) {
                printBoard(board);
                printf("Parabéns %s! Você ganhou!\n", currentPlayer == 0 ? jogador1 : jogador2);
                break;
            }

            if (checkDraw(board)) {
                printBoard(board);
                printf("Empate!\n");
                break;
            }

            currentPlayer = 1 - currentPlayer;
            currentSymbol = currentPlayer == 0 ? PLAYER1 : PLAYER2;
            }
            printf("\n\nDeseja Jogar Novamente (s/n): ");
            scanf(" %c", &JogarNovamente);
            system("cls");

            } while (JogarNovamente == 's' || JogarNovamente == 'S');


}
else{
    return 0;
    }


printf("\n\n\n");

return 0;
}
}

