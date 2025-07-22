/*
choose from three for formula, 
celcius to fahrenheit , celcius to kelvin, 
fahrenheit to celcius , fahrenheit to kelvin, 
kelvin to celcius , kelvin to fahrenheit . 
after the choice it will asked for selected value. 
after that it will show the result. 

using do loop , validation  , labels and scientific format here. 
if input is invalid ask for value again until the expected valid range is not input. 
adding conversion history to choose_from_c_or_f_or_k_03.c 
do, switch, case, if ... else, break, while 
snprintf, default, 

we will add extra feature like: Include timestamps (advanced)? 

parent file:
choose_from_c_or_f_or_k.c 

choose_from_c_or_f_or_k_03.c
choose_from_cel_or_fah_or_kel_03.c

*/

#include <stdio.h>
#include <string.h>

#define MAX_HISTORY 100

int main() {
    int choice, history_count = 0;
    float temp, converted;
    char again;
    char history[MAX_HISTORY][100]; // store up to 100 formatted strings

    do {
        printf("\nTemperature Conversion Program\n");
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
                if (temp < -273.15) {
                    printf("Error: Below absolute zero!\n");
                } else {
                    converted = (temp * 9.0 / 5.0) + 32;
                    printf("Temperature: %.2f°C = %.2f°F\n", temp, converted);
                    snprintf(history[history_count++], 100, "%.2f°C = %.2f°F", temp, converted);
                }
                break;

            case 2:
                printf("Enter temperature in Celsius (≥ -273.15): ");
                scanf("%f", &temp);
                if (temp < -273.15) {
                    printf("Error: Below absolute zero!\n");
                } else {
                    converted = temp + 273.15;
                    printf("Temperature: %.2f°C = %.2fK\n", temp, converted);
                    snprintf(history[history_count++], 100, "%.2f°C = %.2fK", temp, converted);
                }
                break;

            case 3:
                printf("Enter temperature in Fahrenheit (≥ -459.67): ");
                scanf("%f", &temp);
                if (temp < -459.67) {
                    printf("Error: Below absolute zero!\n");
                } else {
                    converted = (temp - 32) * 5.0 / 9.0;
                    printf("Temperature: %.2f°F = %.2f°C\n", temp, converted);
                    snprintf(history[history_count++], 100, "%.2f°F = %.2f°C", temp, converted);
                }
                break;

            case 4:
                printf("Enter temperature in Fahrenheit (≥ -459.67): ");
                scanf("%f", &temp);
                if (temp < -459.67) {
                    printf("Error: Below absolute zero!\n");
                } else {
                    converted = (temp - 32) * 5.0 / 9.0 + 273.15;
                    printf("Temperature: %.2f°F = %.2fK\n", temp, converted);
                    snprintf(history[history_count++], 100, "%.2f°F = %.2fK", temp, converted);
                }
                break;

            case 5:
                printf("Enter temperature in Kelvin (≥ 0): ");
                scanf("%f", &temp);
                if (temp < 0) {
                    printf("Error: Below absolute zero!\n");
                } else {
                    converted = temp - 273.15;
                    printf("Temperature: %.2fK = %.2f°C\n", temp, converted);
                    snprintf(history[history_count++], 100, "%.2fK = %.2f°C", temp, converted);
                }
                break;

            case 6:
                printf("Enter temperature in Kelvin (≥ 0): ");
                scanf("%f", &temp);
                if (temp < 0) {
                    printf("Error: Below absolute zero!\n");
                } else {
                    converted = (temp - 273.15) * 9.0 / 5.0 + 32;
                    printf("Temperature: %.2fK = %.2f°F\n", temp, converted);
                    snprintf(history[history_count++], 100, "%.2fK = %.2f°F", temp, converted);
                }
                break;

            default:
                printf("Invalid choice! Please enter a number from 1 to 6.\n");
        }

        if (history_count >= MAX_HISTORY) {
            printf("\nHistory limit reached! Stopping further conversions.\n");
            break;
        }

        printf("\nDo you want to convert again? (Y/N): ");
        scanf(" %c", &again); // space before %c to ignore leftover newline

    } while (again == 'Y' || again == 'y');

    // Show history
    printf("\n--- Conversion History ---\n");
    if (history_count == 0) {
        printf("No conversions performed.\n");
    } else {
        for (int i = 0; i < history_count; i++) {
            printf("%d. %s\n", i + 1, history[i]);
        }
    }

    printf("\nThank you for using the converter. Goodbye!\n");

    return 0;
}













