/*
choose from three for formula, 
celcius to fahrenheit , celcius to kelvin, 
fahrenheit to celcius , fahrenheit to kelvin, 
kelvin to celcius , kelvin to fahrenheit . 
after the choice it will asked for selected value. 
after that it will show the result. 

using do looping , validation  , labels and scientific format here. 
if input is invalid ask for value again until the expected valid range is not input. 
do, switch, case, if ... else, break, while 

choose_from_c_or_f_or_k.c 
choose_from_c_or_f_or_k_02.c
choose_from_cel_or_fah_or_kel_02.c

*/


#include <stdio.h>

int main() {
    int choice;
    float temp, converted;
    char again;

    do {
        printf("\nWelcome to Temperature Conversion Program\n");
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
                printf("Enter temperature in Celsius (≥ -273.15): ");
                scanf("%f", &temp);
                if (temp < -273.15)
                    printf("Error: Below absolute zero!\n");
                else {
                    converted = (temp * 9.0 / 5.0) + 32;
                    printf("Temperature: %.2f°C = %.2f°F\n", temp, converted);
                }
                break;

            case 2:
                printf("Enter temperature in Celsius (≥ -273.15): ");
                scanf("%f", &temp);
                if (temp < -273.15)
                    printf("Error: Below absolute zero!\n");
                else {
                    converted = temp + 273.15;
                    printf("Temperature: %.2f°C = %.2fK\n", temp, converted);
                }
                break;

            case 3:
                printf("Enter temperature in Fahrenheit (≥ -459.67): ");
                scanf("%f", &temp);
                if (temp < -459.67)
                    printf("Error: Below absolute zero!\n");
                else {
                    converted = (temp - 32) * 5.0 / 9.0;
                    printf("Temperature: %.2f°F = %.2f°C\n", temp, converted);
                }
                break;

            case 4:
                printf("Enter temperature in Fahrenheit (≥ -459.67): ");
                scanf("%f", &temp);
                if (temp < -459.67)
                    printf("Error: Below absolute zero!\n");
                else {
                    converted = (temp - 32) * 5.0 / 9.0 + 273.15;
                    printf("Temperature: %.2f°F = %.2fK\n", temp, converted);
                }
                break;

            case 5:
                printf("Enter temperature in Kelvin (≥ 0): ");
                scanf("%f", &temp);
                if (temp < 0)
                    printf("Error: Below absolute zero!\n");
                else {
                    converted = temp - 273.15;
                    printf("Temperature: %.2fK = %.2f°C\n", temp, converted);
                }
                break;

            case 6:
                printf("Enter temperature in Kelvin (≥ 0): ");
                scanf("%f", &temp);
                if (temp < 0)
                    printf("Error: Below absolute zero!\n");
                else {
                    converted = (temp - 273.15) * 9.0 / 5.0 + 32;
                    printf("Temperature: %.2fK = %.2f°F\n", temp, converted);
                }
                break;

            default:
                printf("Invalid choice! Please enter a number from 1 to 6.\n");
        }

        printf("\nDo you want to convert again? (Y/N): ");
        scanf(" %c", &again); // space before %c to ignore leftover newline

    } while (again == 'Y' || again == 'y');

    printf("\nThank you for using the converter. Goodbye!\n");

    return 0;
}










