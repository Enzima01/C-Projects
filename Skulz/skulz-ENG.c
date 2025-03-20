#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <windows.h>

int main() {


    srand((unsigned int) time(NULL));

    int function , operation_calc , operation_unimedida , operation_temperature , operation_speed, operation_length, operation_weight;
    int celsius_1, fahrenheit_1, kelvin_1;
    float kmh, ms , mph;
    float km, m , cm;
    float kg , g , mg;
    float n1 , n2 , result;
    float weight,height, bmi;
    int number, equation, easteregg;
    int draw = rand() % 2;
    char letter;
    char answer;
    float a, b, c, delta, x, x1 ,x2;
    float a1, b1, xeq1;

    start:

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

    printf(" \n\nPress ENTER to start...");
    getchar();
    system("cls");



    printf("  ____  _  ___   _ _     _____  \n");
    printf(" / ___|| |/ / | | | |   |__  /  \n");
    printf(" \\___ \\| ' /| | | | |     / /   \n");
    printf("  ___) | . \\| |_| | |___ / /_   \n");
    printf(" |____/|_|\\_\\\\___/|_____/____|  by Enzima01\n\n\n");
    printf(" 1) CALCULATOR \n\n");
    printf(" 2) UNIT CONVERTER\n\n");
    printf(" 3) BODY MASS INDEX (BMI)\n\n");
    printf(" 4) GUESS FOR ALTERNATIVES\n\n");
    printf(" 5) YES OR NO\n\n");
    printf("Type the number for the specific function: ");
    scanf("%d" , &function);



if(function == 1){

        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf("| CALCULATOR | \n \n");
        printf(" 1) ADDITION \n\n" );
        printf(" 2) SUBTRACTION \n\n");
        printf(" 3) MULTIPLICATION \n\n");
        printf(" 4) DIVISION \n\n");
        printf(" 5) EQUATIONS \n\n");

        printf("Type the number (1-4) for the specific operation: ");
        scanf("%d" , &operation_calc);
}

        if (operation_calc == 1){

        system("cls");
        printf(" | ADDITION |\n\n");
        printf(" Type the first number: ");
        scanf("%f",&n1);
        printf("\n Type the second number: ");
        scanf("%f",&n2);
        result = n1 + n2;
        printf("\n------------------");
        printf("\n RESULT: %.2f" , result);
        printf("\n------------------");
        }

        if (operation_calc == 2){
        system("cls");
        printf(" | SUBTRACTION |\n\n");
        printf(" Type the first number: ");
        scanf("%f",&n1);
        printf("\n Type the second number: ");
        scanf("%f",&n2);
        result = n1 - n2;
        printf("\n------------------");
        printf("\n RESULT: %.2f" , result);
        printf("\n------------------");
        }

        if (operation_calc == 3){
        system("cls");
        printf(" | MULTIPLICATION | \n\n");
        printf(" Type the first number: ");
        scanf("%f",&n1);
        printf("\n Type the second number: ");
        scanf("%f",&n2);
        result = n1 * n2;
        printf("\n------------------");
        printf("\n RESULT: %.2f" , result);
        printf("\n------------------");
        }

        if (operation_calc == 4){
        system("cls");
        printf(" | DIVISION | \n\n");
        printf(" Type the first number: ");
        scanf("%f",&n1);
        printf("\n Type the second number: ");
        scanf("%f",&n2);
        result = n1 / n2;
        printf("\n------------------");
        printf("\n RESULT: %.2f" , result);
        printf("\n------------------");
        }

        if(operation_calc == 5){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf(" | EQUATIONS |\n\n");
            printf(" 1) FIRST DEGREE EQUATION\n\n");
            printf(" 2) SECOND DEGREE EQUATION\n\n");
            printf("Type the number (1-2) for the specific operation: ");
            scanf("%d", &equation);
            if(equation == 1){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf(" | FIRST DEGREE EQUATION |\n\n");
                printf(" Type the value of A: ");
                scanf("%f", &a1);
                printf("\n Type the value of B: ");
                scanf("%f", &b1);
                if (a1 == 0) {
                    if (b1 == 0) {
                    printf("The equation has infinite solutions\n");
                    }   else {
                            printf("The equation has no solution!\n");
                        }
                }           else {
                                xeq1 = -b1 / a1;
                                printf("\n Ax + B = 0\n");
                                printf("\n X = - B / A\n");
                                printf("\n X = - %.2f / %.2f\n\n", b1,a1);
                                printf(" X = %.2f\n", xeq1);
                            }
            }
            if(equation == 2){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf(" | SECOND DEGREE EQUATION |\n\n");
                printf(" Type the value of A: ");
                scanf("%f", &a);
                if(a  == 0){
                printf("\n\n Impossible to calculate! A negative!!");
                }
            else{
                printf("\n Type the value of B: ");
                scanf("%f", &b);
                printf("\n Type the value of C: ");
                scanf("%f", &c);
                printf("\n==============================\n");
                printf("        | BHASKARA |\n");
                delta = (b * b) -4 * a * c;
                printf("\n (B * B) -4 * A * C");
                printf("\n\n (%.2f * %.2f) -4 * %.2f * %.2f\n" , b, b, a, c);

            if(delta < 0){
            printf("\n Delta = %.2f", delta);
            printf("\n\n Impossible to calculate! Delta negative!!");
            }
            else{
                printf("\n Delta is equal to: %.2f", delta);
                printf("\n\n==============================\n");
                printf("   | DISCOVER THE ROOTS |\n");
                printf("\n X = (-B +- square root of Delta) / 2 * A\n");
                printf("\n X = (- %.2f +- square root of %2.f) / 2 * %.2f", b, delta, a);
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("\n\n X1 = %.2f", x1);
                printf("\n\n X2 = %.2f", x2);
            }
            }

            }
        }

if(function == 2){
    system("cls");
    printf("  ____  _  ___   _ _     _____  \n");
    printf(" / ___|| |/ / | | | |   |__  /  \n");
    printf(" \\___ \\| ' /| | | | |     / /   \n");
    printf("  ___) | . \\| |_| | |___ / /_   \n");
    printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
    printf("| UNIT CONVERTER |\n\n");
    printf(" 1) TEMPERATURE \n\n");
    printf(" 2) SPEED \n\n");
    printf(" 3) LENGTH \n\n");
    printf(" 4) WEIGHT \n\n");
    printf("Type the number (1-4) for the specific operation: ");
    scanf("%d" , &operation_unimedida);
}
if(operation_unimedida == 1){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf("| TEMPERATURE CONVERTER | \n\n\n");

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

        printf("Type the number (1-6) for the specific operation: ");
        scanf("%d" , &operation_temperature);

}
        if(operation_temperature == 1){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Celsius(°C) --> Fahrenheit(°F) |\n\n");
            printf(" Type the temperature value (°C): ");
            scanf("%d", &celsius_1);
            fahrenheit_1 = (celsius_1 * 9/5) + 32;
            printf("\n-----------------------------");
            printf("\n VALUE IN FAHRENHEIT: %d°F",fahrenheit_1);
            printf("\n-----------------------------");
        }

        if(operation_temperature == 2){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Celsius(°C) --> Kelvin(K) |\n\n");
            printf(" Type the temperature value (°C): ");
            scanf("%d", &celsius_1);
            kelvin_1 = celsius_1 + 273;
            printf("\n-----------------------------");
            printf("\n VALUE IN KELVIN: %dK",kelvin_1);
            printf("\n-----------------------------");
        }

        if(operation_temperature == 3){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Fahrenheit(°F) --> Celsius(°C) |\n\n");
            printf(" Type the temperature value (°F): ");
            scanf("%d", &fahrenheit_1);
            celsius_1 = (fahrenheit_1 - 32) * 5/9;
            printf("\n-----------------------------");
            printf("\n VALUE IN CELSIUS: %d°C",celsius_1);
            printf("\n-----------------------------");

        }

        if(operation_temperature == 4){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Fahrenheit(°F) --> Kelvin(K) |\n\n");
            printf(" Type the temperature value (°F): ");
            scanf("%d", &fahrenheit_1);
            kelvin_1 = (fahrenheit_1 - 32) * 5/9 + 273;
            printf("\n-----------------------------");
            printf("\n VALUE IN KELVIN: %d°K",kelvin_1);
            printf("\n-----------------------------");

        }

        if(operation_temperature == 5){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Kelvin(K) --> Celsius(°C) |\n\n");
            printf(" Type the temperature value (K): ");
            scanf("%d", &kelvin_1);
            celsius_1 = kelvin_1 - 273;
            printf("\n-----------------------------");
            printf("\n VALUE IN CELSIUS: %d°C",celsius_1);
            printf("\n-----------------------------");

        }

        if(operation_temperature == 6){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Kelvin(K) --> Fahrenheit(°F) |\n\n");
            printf(" Type the temperature value (K): ");
            scanf("%d", &kelvin_1);
            fahrenheit_1 = (kelvin_1 - 273) * 9/5 + 32;
            printf("\n-----------------------------");
            printf("\n VALUE IN FAHRENHEIT: %d°F",fahrenheit_1);
            printf("\n-----------------------------");

        }

if(operation_unimedida == 2){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf("| SPEED CONVERTER | \n\n\n");

        printf("                          |KM/H|");
        printf(" \n------------------------------------------------------------");
        printf("\n 1) Kilometers per hour (Km/h) --> Meters per second (m/s)\n\n");
        printf(" 2) Kilometers per hour (Km/h) --> Miles per hour (mph)\n");
        printf(" ------------------------------------------------------------\n\n");

        printf("                           |M/S|");
        printf(" \n------------------------------------------------------------");
        printf("\n 3) Meters per second (m/s) --> Kilometers per hour (Km/h)\n\n");
        printf(" 4) Meters per second (m/s) --> Miles per hour (mph)\n");
        printf(" ------------------------------------------------------------\n\n");

        printf("                           |MPH|");
        printf(" \n------------------------------------------------------------");
        printf("\n 5) Miles per hour (mph) --> Kilometers per hour (Km/h)\n\n");
        printf(" 6) Miles per hour (mph) --> Meters per second (m/s)\n");
        printf(" ------------------------------------------------------------\n\n");

        printf("Type the number (1-6) for the specific operation: ");
        scanf("%d" , &operation_speed);

        if(operation_speed == 1){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Kilometers per hour (Km/h) --> Meters per second (m/s) |\n\n");
            printf(" Type the speed value (Km/h): ");
            scanf("%f", &kmh);
            ms = kmh / 3.6;
            printf("\n----------------------------------------");
            printf("\n VALUE IN METERS PER SECOND: %.2f m/s", ms);
            printf("\n----------------------------------------");
        }

        if(operation_speed == 2){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Kilometers per hour (Km/h) --> Miles per hour (mph) |\n\n");
            printf(" Type the speed value (Km/h): ");
            scanf("%f", &kmh);
            mph = kmh/1.609;
            printf("\n----------------------------------------");
            printf("\n VALUE IN MILES PER SECOND: %.2f mph", mph);
            printf("\n----------------------------------------");
        }

        if(operation_speed == 3){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Meters per second (m/s) --> Kilometers per hour (Km/h) |\n\n");
            printf(" Type the speed value (m/s): ");
            scanf("%f", &ms);
            kmh = ms * 3.6;
            printf("\n--------------------------------------------");
            printf("\n VALUE IN KILOMETERS PER HOURS: %.2f Km/h", kmh);
            printf("\n--------------------------------------------");

        }

         if(operation_speed == 4){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Meters per second (m/s) --> Miles per hour (mph) |\n\n");
            printf(" Type the speed value (m/s): ");
            scanf("%f", &ms);
            mph = ms * 2.237;
            printf("\n----------------------------------------");
            printf("\n VALUE IN MILES PER SECOND: %.2f mph", mph);
            printf("\n----------------------------------------");
         }

         if(operation_speed == 5){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Miles per hour (mph) --> Kilometers per hour (Km/h) |\n\n");
            printf(" Type the speed value (mph): ");
            scanf("%f", &mph);
            kmh = mph * 1.609;
            printf("\n--------------------------------------------");
            printf("\n VALUE IN KILOMETERS PER HOURS: %.2f Km/h", kmh);
            printf("\n--------------------------------------------");
        }

        if(operation_speed == 6){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Miles per hour (mph) --> Meters per second (m/s)| \n\n");
            printf(" Type the speed value (mph): ");
            scanf("%f", &mph);
            ms = mph / 2.237;
            printf("\n----------------------------------------");
            printf("\n VALUE IN METERS PER SECOND: %.2f m/s", ms);
            printf("\n----------------------------------------");
        }
}


if (operation_unimedida == 3) {
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| LENGTH CONVERTER | \n\n\n");
            printf("                   |KM|");
            printf("\n------------------------------------------\n");
            printf(" 1) Kilometers (km) --> Meters (m)\n\n");
            printf(" 2) Kilometers (km) --> Centimeters (cm)");
            printf("\n------------------------------------------\n\n");

            printf("                   |M|");
            printf("\n------------------------------------------\n");
            printf(" 3) Meters (m) --> Kilometers (km)\n\n");
            printf(" 4) Meters (m) --> Centimeters (cm)");
            printf("\n------------------------------------------\n\n");

            printf("                   |CM|");
            printf("\n------------------------------------------\n");
            printf(" 5) Centimeters (cm) --> Kilometers (km)\n\n");
            printf(" 6) Centimeters (cm) --> Meters (m)");
            printf("\n------------------------------------------\n\n");

            printf("Type the number (1-6) for the specific operation: ");
            scanf("%d" , &operation_length);
}
            if(operation_length == 1){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Kilometers (km) --> Meters (m) |\n\n");
                printf(" Type the length value (km): ");
                scanf("%f", &km);
                m = km * 1000;
                printf("\n-----------------------------");
                printf("\n VALUE IN METERS: %.2f m",m);
                printf("\n-----------------------------");
            }

            if(operation_length == 2){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Kilometers (km) --> Centimeters (cm) |\n\n");
                printf(" Type the length value (km): ");
                scanf("%f", &km);
                cm = km * 100000;
                printf("\n------------------------------------");
                printf("\n VALUE IN CENTIMETERS: %.2f cm",cm);
                printf("\n------------------------------------");
            }

            if(operation_length == 3){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Meters (m) --> Kilometers (km) |\n\n");
                printf(" Type the length value (m): ");
                scanf("%f", &m);
                km = m / 1000;
                printf("\n------------------------------------");
                printf("\n VALUE IN KILOMETERS: %.2f km",km);
                printf("\n------------------------------------");

            }

            if(operation_length == 4){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Meters (m) --> Centimeters (cm) |\n\n");
                printf(" Type the length value (m): ");
                scanf("%f", &m);
                cm = m * 100;
                printf("\n------------------------------------");
                printf("\n VALUE IN CENTIMETERS: %.2f cm",cm);
                printf("\n------------------------------------");
            }

            if(operation_length == 5){
                system("cls");
                printf("  ____  _  ___   _ _     _____  \n");
                printf(" / ___|| |/ / | | | |   |__  /  \n");
                printf(" \\___ \\| ' /| | | | |     / /   \n");
                printf("  ___) | . \\| |_| | |___ / /_   \n");
                printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
                printf("| Centimeters (cm) --> Kilometers (km) |\n\n");
                printf(" Type the length value (cm): ");
                scanf("%f", &cm);
                km = cm / 100000;
                printf("\n------------------------------------");
                printf("\n VALUE IN KILOMETERS: %.2f km",km);
                printf("\n------------------------------------");
            }

                if(operation_length == 6){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf("| Centimeters (cm) --> Meters (m) |\n\n");
        printf(" Type the length value (cm): ");
        scanf("%f", &cm);
        m = cm / 100;
        printf("\n-----------------------------");
        printf("\n VALUE IN METERS: %.2f m",m);
        printf("\n-----------------------------");
    }

    if (operation_unimedida == 4){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf("| WEIGHT CONVERTER | \n\n\n");

        printf("                  |KG|");
        printf("\n-----------------------------------------\n");
        printf(" 1) Kilogram (kg) --> Gram (g)\n");
        printf("\n 2) Kilogram (kg) --> Milligram (mg)");
        printf("\n-----------------------------------------\n\n");

        printf("                  |G|");
        printf("\n-----------------------------------------\n");
        printf(" 3) Gram (g) --> Kilogram (kg)\n");
        printf("\n 4) Gram (g) --> Milligram (mg)");
        printf("\n-----------------------------------------\n\n");

        printf("                  |MG|");
        printf("\n-----------------------------------------\n");
        printf(" 5) Milligram (mg) --> Kilogram (kg)\n");
        printf("\n 6) Milligram (mg) --> Gram (g)");
        printf("\n-----------------------------------------\n\n");

        printf("Type the number (1-6) for the specific operation: ");
        scanf("%d" , &operation_weight);

        if(operation_weight == 1){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Kilogram (kg) --> Gram (g) |\n\n");
            printf(" Type the weight value (kg): ");
            scanf("%f", &kg);
            g = kg * 1000;
            printf("\n-----------------------------");
            printf("\n VALUE IN GRAM: %.2f g",g);
            printf("\n-----------------------------");
        }

        if(operation_weight == 2){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Kilogram (kg) --> Milligram (mg) |\n\n");
            printf(" Type the weight value (kg): ");
            scanf("%f", &kg);
            mg = kg * 1000000;
            printf("\n----------------------------------");
            printf("\n VALUE IN MILLIGRAM: %.2f mg",mg);
            printf("\n----------------------------------");
        }

        if(operation_weight == 3){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Gram (g) --> Kilogram (kg) | \n\n");
            printf(" Type the weight value (g): ");
            scanf("%f", &g);
            kg = g / 1000;
            printf("\n-------------------------------");
            printf("\n VALUE IN KILOGRAM: %.3f kg",kg);
            printf("\n-------------------------------");
        }

        if(operation_weight == 4){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Gram (g) --> Milligram (mg) |\n\n");
            printf(" Type the weight value (g): ");
            scanf("%f", &g);
            mg = g * 1000;
            printf("\n----------------------------------");
            printf("\n VALUE IN MILLIGRAM: %.2f mg",mg);
            printf("\n----------------------------------");
        }

        if(operation_weight == 5){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Milligram (mg) --> Kilogram (kg) |\n\n");
            printf(" Type the weight value (mg): ");
            scanf("%f", &mg);
            kg = mg / 1000000;
            printf("\n-------------------------------");
            printf("\n VALUE IN KILOGRAM: %.2f kg",kg);
            printf("\n-------------------------------");
        }

        if(operation_weight == 6){
            system("cls");
            printf("  ____  _  ___   _ _     _____  \n");
            printf(" / ___|| |/ / | | | |   |__  /  \n");
            printf(" \\___ \\| ' /| | | | |     / /   \n");
            printf("  ___) | . \\| |_| | |___ / /_   \n");
            printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
            printf("| Milligram (mg) --> Gram (g) |\n\n");
            printf(" Type the weight value (mg): ");
            scanf("%f", &mg);
            g = mg / 1000;
            printf("\n-----------------------------");
            printf("\n VALUE IN GRAM: %.2f g",g);
            printf("\n-----------------------------");
        }
    }

    if(function == 3){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf("| BMI CALCULATION |\n\n");
        printf("Type your height (M): ");
        scanf("%f", &height);
        printf("\n");

        printf("Type your weight (Kg): ");
        scanf("%f", &weight);
        bmi = weight/(height * height);
        printf("\n----------------------\n");
        printf(" BMI: ");
        printf("%.2f\n", bmi);

        if (bmi < 18.5 ){
            printf("\n----------------------\n");
            printf("\n Underweight\n");
        }
        else if (bmi >= 18.5 && bmi < 25){
            printf("\n Normal weight\n");
            printf("----------------------\n");
        }
        else if (bmi >= 25 && bmi <30){
            printf("\n Overweight\n");
            printf("----------------------\n");
        }
        else if (bmi >= 30 && bmi < 35){
            printf("\n Obesity Grade 1\n");
            printf("----------------------\n");
        }
        else if (bmi >= 35 && bmi < 40){
            printf("\n Obesity Grade 2\n");
            printf("----------------------\n");
        }
        else if (bmi >= 40){
            printf("\n Obesity Grade 3\n");
            printf("----------------------\n");
        }
    }

    if(function == 4){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf(" | GUESS ALTERNATIVES |\n\n");
        int number;
        printf(" How many alternatives does the question have?: ");
        scanf("%d", &number);
        int draw = 1 + (rand() % number);
        printf("\n Drawn number: %d\n", draw);
    }

    if(function == 5){
        system("cls");
        printf("  ____  _  ___   _ _     _____  \n");
        printf(" / ___|| |/ / | | | |   |__  /  \n");
        printf(" \\___ \\| ' /| | | | |     / /   \n");
        printf("  ___) | . \\| |_| | |___ / /_   \n");
        printf(" |____/|_|\\_\\\\___/|_____/____|  \n\n\n");
        printf(" | YES or NO |\n\n");
        int draw = rand() % 2;
        printf(draw == 0 ? "      YES\n" : "      NO\n");
    }

    printf("\n=====================================");
    printf("\n End of the program...\n");
    printf("\n Do you want to return to the start? (y/n): ");
    scanf(" %c", &answer);
    printf("\n=====================================\n\n");
    printf(" ==========================");
    printf("\n | SKULZ made by Enzima01 |\n");
    printf(" ==========================");

    if (answer == 'y' || answer == 'Y'){
        goto start;
    } else {
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

                printf("\n");
                for (int i = 0; i < SIZE; i++) {
                    for (int j = 0; j < SIZE; j++) {
                        if (board[i][j] == EMPTY) {
                            printf("|%d", (i * SIZE + j + 1));
                        } else {
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

            char PlayAgain;

            do {
                char board[SIZE][SIZE] = {
                    {EMPTY, EMPTY, EMPTY},
                    {EMPTY, EMPTY, EMPTY},
                    {EMPTY, EMPTY, EMPTY}
                };
                char player1[50], player2[50];
                srand(time(NULL));

                printf("       | TIC TAC TOE |\n\n");

                printf("Type the name of Player 1 (O): ");
                scanf("%49s", player1);
                printf("Type the name of Player 2 (X): ");
                scanf("%49s", player2);

                int currentPlayer = rand() % 2;
                char currentSymbol = currentPlayer == 0 ? PLAYER1 : PLAYER2;

                int position;

                while (1) {
                    printBoard(board);
                    printf("It's %s's (%c) turn. Type a number from 1 to 9 for your move: ", currentPlayer == 0 ? player1 : player2, currentSymbol);
                    scanf("%d", &position);

                    int row = (position - 1) / SIZE;
                    int col = (position - 1) % SIZE;

                    if (position < 1 || position > 9 || board[row][col] != EMPTY) {
                        printf("Invalid move! Try again.\n");
                        continue;
                    }
                    board[row][col] = currentSymbol;

                    if (checkWin(board, currentSymbol)) {
                        printBoard(board);
                        printf("Congratulations %s! You won!\n", currentPlayer == 0 ? player1 : player2);
                        break;
                    }

                    if (checkDraw(board)) {
                        printBoard(board);
                        printf("It's a draw!\n");
                        break;
                    }

                    currentPlayer = 1 - currentPlayer;
                    currentSymbol = currentPlayer == 0 ? PLAYER1 : PLAYER2;
                }
                printf("\n\nDo you want to play again (y/n): ");
                scanf(" %c", &PlayAgain);
                system("cls");

            } while (PlayAgain == 'y' || PlayAgain == 'Y');
        }
        else {
            return 0;
        }

    printf("\n\n\n");

    return 0;
}

}
