//"Terrain" Algorithm
// Subject : [Programming Language and Logic]
// Description : "Terrain" problem

//Make a program to read the measurements of the width and length of a land
//rectangular with one decimal place, as well as the square meter value
// of the land to two decimal places. Then the program should show the
// value of land area, as well as value of land price, both with
// two decimal places, as in the example.

// Author: Guilherme Marinho Bernardi
// Current date: 09/02/2023

#include <stdio.h>

int main(){

    float length, width, squadMPrice, landPrice, landArea;

    printf("Enter the length of the land: ");
    scanf("%f", &length);
    printf("Enter the width of the land: ");
    scanf("%f", &width);
    printf("Enter the price of the square meter: ");
    scanf("%f", &squadMPrice);

    landArea = length * width;
    landPrice = landArea * squadMPrice;

    printf("The land has %.2f squad meters and it's full price is %.2f reais.", landArea,landPrice);

}