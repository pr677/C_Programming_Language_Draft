/*
choose from two for formula, 
celcius to fahrenheit ,   
fahrenheit to celcius . 
after the choice it will asked for selected value. 
after that it will show the result. 

main file is choose_from_c_or_f.c 

chooseFromTemperatureCorF_02.c
choose_from_cel_or_fah_02.c

this code uses do , if ... else , else if, while , continue ,

write a c program , where the program will asked if i want to know if want to convert temperature from celsius2fahrenheit or fahrenheit to celsius. after conforming, it will asked for value according to user's previous choice. then it will print result . 


*/


#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    int choice;
    float temp, converted;
    char again;

    do {
        printf("\nTemperature Converter\n");
        printf("---------------------\n");
        printf("Choose conversion option:\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("Enter your choice (1 or 2): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter numeric values only.\n");
            // clear invalid input buffer
            while (getchar() != '\n');
            continue;
        }

        if (choice == 1) {
            printf("Enter temperature in Celsius: ");
            if (scanf("%f", &temp) != 1) {
                printf("Invalid temperature input.\n");
                while (getchar() != '\n');
                continue;
            }
            converted = (temp * 9.0 / 5.0) + 32.0;
            printf("Temperature in Fahrenheit: %.2f°F\n", converted);
        } else if (choice == 2) {
            printf("Enter temperature in Fahrenheit: ");
            if (scanf("%f", &temp) != 1) {
                printf("Invalid temperature input.\n");
                while (getchar() != '\n');
                continue;
            }
            converted = (temp - 32.0) * 5.0 / 9.0;
            printf("Temperature in Celsius: %.2f°C\n", converted);
        } else {
            printf("Invalid choice. Please select 1 or 2.\n");
            while (getchar() != '\n');
            continue;
        }

        // Ask to convert again
        printf("Do you want to convert again? (Y/N): ");
        while (getchar() != '\n'); // Clear leftover newline
        scanf("%c", &again);

    } while (toupper(again) == 'Y');

    printf("Thank you for using the Temperature Converter!\n");
    return 0;
}













