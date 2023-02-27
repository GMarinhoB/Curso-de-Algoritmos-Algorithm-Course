//Algorithm "Heights"
// Subject : [Programming Language and Logic]

// Description : Make a program to read name, age and height of N people,
//according to example. Then, show on the screen the average height of the people,
//and also show the percentage of people under 16,
// as well as the names of these people if any.

// Author: Guilherme Marinho Bernardi
// Current date: 09/02/2023

#include <stdio.h>
#include <string.h>

void clear_keyboard_buffer(void)
{
    int c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
    return;
}

int main(){

    int n, peopleYounger;
    float avgHeight, sumHeight, percentage;

    printf("How many people do you want to write?");
    scanf("%d", &n);

    char name[n][50];
    int ages [n];
    float heights [n];

    for (int i = 0; i < n; i++)
    {
        printf("Name of the %d nd person: ", i+1);
        clear_keyboard_buffer();
        fgets(name[i], 50, stdin);
        printf("Age of the %d nd person: ", i+1);
        scanf("%d", &ages[i]);
        printf("Height of the %d nd person: ", i+1);
        scanf("%f", &heights[i]);
        clean();
    }

    //making the avg of heights

    sumHeight = 0;
    for (int i = 0; i < n; i++)
    {
        sumHeight += heights[i];
    }
    avgHeight = sumHeight / n;


    //searching who has age < 16

    peopleYounger = 0;
    for (int i = 0; i < n; i++)
    {
        if (ages[i] < 16)
        { peopleYounger++;}
    }
    percentage = (peopleYounger*100) / n;

    //showing results:

    printf("\nAverage of heights: %.2f \n", avgHeight);
    printf("Percentage of people younger than 16: %d \n", peopleYounger);
    printf("Their names are: \n");
    for (int i = 0; i < n; i++)
    {
        if (ages[i] < 16)
        { printf("%s ", name[i]); }
    }
 
    return 0;
}