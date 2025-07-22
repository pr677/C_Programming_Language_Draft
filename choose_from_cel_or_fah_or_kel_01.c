/*
choose from three for formula, 
celcius to fahrenheit , celcius to kelvin, 
fahrenheit to celcius , fahrenheit to kelvin, 
kelvin to celcius , kelvin to fahrenheit . 
after the choice it will asked for selected value. 
after that it will show the result. 
using switch , case , default here. 

chooseFromCorForK.c
choose_from_c_or_f_or_k.c 
choose_from_cel_or_fah_or_kel_01.c


*/


#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    printf("Temperature Conversion Program\n");
    printf("--------------------------------\n");
    printf("Choose a conversion option:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Celsius to Kelvin\n");
    printf("3. Fahrenheit to Celsius\n");
    printf("4. Fahrenheit to Kelvin\n");
    printf("5. Kelvin to Celsius\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            converted = (temp * 9.0 / 5.0) + 32;
            printf("Temperature in Fahrenheit: %.2f°F\n", converted);
            break;

        case 2:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            converted = temp + 273.15;
            printf("Temperature in Kelvin: %.2fK\n", converted);
            break;

        case 3:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            converted = (temp - 32) * 5.0 / 9.0;
            printf("Temperature in Celsius: %.2f°C\n", converted);
            break;

        case 4:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            converted = (temp - 32) * 5.0 / 9.0 + 273.15;
            printf("Temperature in Kelvin: %.2fK\n", converted);
            break;

        case 5:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            converted = temp - 273.15;
            printf("Temperature in Celsius: %.2f°C\n", converted);
            break;

        case 6:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            converted = (temp - 273.15) * 9.0 / 5.0 + 32;
            printf("Temperature in Fahrenheit: %.2f°F\n", converted);
            break;

        default:
            printf("Invalid choice. Please run the program again and choose 1-6.\n");
            break;
    }

    return 0;
}








