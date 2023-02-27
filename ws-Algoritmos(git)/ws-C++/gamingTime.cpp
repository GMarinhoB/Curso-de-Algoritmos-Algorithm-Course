//Algorithm "TimeOfGame"
// Subject : [Programming Language and Logic]

// Description : Read the start time and end time of a game.
//Then calculate the duration of the game, knowing that it can start
// in one day and finish in another, with a minimum duration of 1 hour
//and maximum of 24 hours.

// Author: Guilherme Marinho Bernardi
// Current date: 13/02/2023

#include <bits/stdc++.h>

using namespace std;

int main(){

    int sTime, eTime, totalTime;

    cout << "Write the time of the start of the game: ";
    cin >> sTime;
    cout << "Write the time of the end of the game: ";
    cin >> eTime;

    if(sTime < eTime)
    {
        totalTime = eTime - sTime;
        cout << "The total time was: " << totalTime << " hours.";
    }  
    else if (sTime == eTime)
    {
        cout << "The total time was: 24 hours";
    }
    else
    {
        totalTime = (24 - sTime);
        totalTime += eTime;
        cout << "The total time was: " << totalTime << " hours.";
    }

    return 0;
}

    