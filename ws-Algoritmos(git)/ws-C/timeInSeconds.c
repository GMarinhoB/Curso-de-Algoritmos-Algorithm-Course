//"Time" Algorithm
// Subject : [Programming Language and Logic]
// Description : Problem "duration"

//Make a program to read a time duration in seconds,
//then print this duration on the screen in hours:minutes:seconds format.

// Author: Guilherme Marinho Bernardi
// Current date: 09/02/2023

#include<stdio.h>
#include<string.h>

int main(){

    int hour,minute,second, timeDigited;
    
    printf("Enter a time duration in seconds: \n");
    scanf("%d", &timeDigited);

    hour = (int) timeDigited / 3600;
    minute = (int) (timeDigited % 3600)/60;
    second = (int) (timeDigited % 60) % 60;
    
    printf("Time: %d:%d:%d", hour, minute, second);

    return 0;
}