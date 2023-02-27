//Algorithm "Intermediate Odd Sum"
// Subject : [Programming Language and Logic]

// Description : Read 2 integer values ​​X and Y (in any order).
//Next, calculate and display the sum of the odd numbers between them.
// Author: Guilherme Marinho Bernardi
// Current date: 09/02/2023

#include <stdio.h>

int main(){

    int x, y, sum;
    sum = 0;

    printf("Insert the value of X: ");
    scanf("%d", &x);
    printf("Insert the value of Y: ");
    scanf("%d", &y);

    if(x < y){
        x+=1;
        for (x; x < y-1; x++)
        {
            if (x%2 != 0) { sum += x; }
        }
    } 
    else if (x > y){
        y+=1;
        for (y; y < x-1; y++)
        {
            if (y%2 != 0) { sum += y; }
        }
    }
    else{
        printf("The values are the same, no odds between them.");
        return 0;
    }

    printf("Sum of the odds: %d", sum);

    return 0;
}