//Algorithm "Heights"
// Subject : [Programming Language and Logic]

// Description : Make a program to read name, age and height of N people,
//according to example. Then, show on the screen the average height of the people,
//and also show the percentage of people under 16,
// as well as the names of these people if any.

// Author: Guilherme Marinho Bernardi
// Current date: 13/02/2023

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, age, lowerSum;
    float height, avgHeights, sumHeights, percentage;
    string name;

    cout << "How many people will be registered?";
    cin >> n;

    string names [n];
    int ages [n];
    float heights [n];

    for (int i = 0; i < n; i++)
    {
        cout << "Write the name of the " << i++ << "° person: ";
        cin >> names[i];
        cout << "Write the age of the " << i++ << "° person: ";
        cin >> ages[i];
        cout << "Write the height of the " << i++ << "° person: ";
        cin >> heights[i];
    }

    sumHeights = 0;
    for (int i = 0; i < n; i++)
    {
        sumHeights += heights[i];
    }

    avgHeights = sumHeights/n;
    cout << fixed << setprecision(2);
    cout << "Average heights: " << avgHeights;
    
    lowerSum = 0;
    for (int i = 0; i < n; i++)
    {
        if(ages[i] < 16)
        {
            lowerSum++;
        }
    }

    percentage = (lowerSum * 100) / n;
    cout << "Persons with less than 16 years: " << percentage << "%";

    for (int i = 0; i < n; i++)
    {
        if(ages[i] < 16)
        {
            cout << names[i];
        }
    }

    return 0;
}