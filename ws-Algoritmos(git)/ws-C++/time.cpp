//"Time" Algorithm
// Subject : [Programming Language and Logic]
// Description : Problem "duration"

//Make a program to read a time duration in seconds,
//then print this duration on the screen in hours:minutes:seconds format.

// Author: Guilherme Marinho Bernardi
// Current date: 13/02/2023

#include <bits/stdc++.h>

using namespace std;

int main (){

    int time, hours, minutes, seconds;

    cout << "Write the seconds: ";
    cin >> time;

    hours = (int) time/3600;
    minutes = (int) (time%3600) / 60;
    seconds = (time%3600) % 60;

    cout << "Time->  " << hours << ":" << minutes << ":" << seconds;

    return 0;
}