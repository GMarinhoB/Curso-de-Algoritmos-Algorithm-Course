//Algorithm "GameTime"
// Subject : [Programming Language and Logic]

// Description : Read the start time and end time of a game.
//Then calculate the duration of the game, knowing that it can start
// in one day and finish in another, with a minimum duration of 1 hour
//and maximum of 24 hours.

// Author: Guilherme Marinho Bernardi
// Current date: 09/02/2023

#include <stdio.h>

int main(){

    int hourS, hourF, totalTime;

    printf("Write the time of the start of the game: ");
    scanf("%d", &hourS);
    printf("Write the time of the end of the game: ");
    scanf("%d", &hourF);

    if (hourS < hourF) {
        totalTime = hourF - hourS;
        printf("The total time of the game was: %d hours.", totalTime);
    } 
    else if (hourS > hourF) {
        totalTime = 24 - hourS;
        totalTime = totalTime + hourS;
        printf("The total time of the game was: %d hours.", totalTime);
    } else printf ("The total time of the game was 24 hours.");
    
    return 0;
}