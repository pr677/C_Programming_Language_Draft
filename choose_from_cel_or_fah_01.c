/*
choose from two for formula, 
celcius to fahrenheit ,   
fahrenheit to celcius . 
after the choice it will asked for selected value. 
after that it will show the result. 

chooseFromTemperatureCorF.c     or     chooseFromTemperatureCorF_01.c 
is
choose_from_c_or_f.c 
is 
choose_from_c_or_f_01.c     or choose_from_cel_or_feh_01.c  

write a c program , where the program will asked if i want   to convert temperature from celsius2fahrenheit or fahrenheit to celsius. after conforming, it will asked for value according to user's previous choice. then it will print result . 


*/



#include <stdio.h>

int main() {
    int choice;
    float temp, converted;

    printf("Choose Temperature Converter\n");
    printf("---------------------\n");
    printf("Choose conversion option:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9.0 / 5.0) + 32.0;
        printf("Temperature in Fahrenheit: %.2f°F\n", converted);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32.0) * 5.0 / 9.0;
        printf("Temperature in Celsius: %.2f°C\n", converted);
    } else {
        printf("Invalid choice. Please run the program again and select 1 or 2.\n");
    }

    return 0;
}







