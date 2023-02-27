//Algorithm "Temperature Conversion"
// Subject : [Programming Language and Logic]

// Description : You want to convert a temperature measurement from the scale
//Celsius to Fahrenheit or vice versa. For this you must build
//a program that reads the letter "C" or "F" indicating in which scale it will be
// inform a temperature. Then the program should show the
//temperature on the other scale with two decimal places.

// Author: Guilherme Marinho Bernardi
// Current data: 09/02/2023

#include <stdio.h>

int main(){

    char type;
    float tempC, tempF;

    printf("You will write the temperature in Celcius or Fahrenheint? (C/F)");
    scanf("%c", &type);

    switch(type){
        case('C'):
            printf("Write the temperature in Celcius: ");
            scanf("%f", &tempC);
            tempF = (tempC * 1.8) + 32;
            printf("Temperature in Fahrenheit: %.2f",tempF);
            break;
            
        case('F'):
            printf("Write the temperature in Fahrenheit: ");
            scanf("%f", &tempF);
            tempC = (tempF-32)/1.8;
            printf("Temperature in Celcius: %.2f",tempC);
            break;
            
        default:
            printf("Wrong imput");
    };

    return 0;
}
