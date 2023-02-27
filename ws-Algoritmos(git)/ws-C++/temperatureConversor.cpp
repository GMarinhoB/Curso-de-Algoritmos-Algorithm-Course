//Algorithm "Temperature Conversion"
// Subject : [Programming Language and Logic]

// Description : You want to convert a temperature measurement from the scale
//Celsius to Fahrenheit or vice versa. For this you must build
//a program that reads the letter "C" or "F" indicating in which scale it will be
// inform a temperature. Then the program should show the
//temperature on the other scale with two decimal places.

// Author: Guilherme Marinho Bernardi
// Current date: 13/02/2023

#include <bits/stdc++.h>

using namespace std;

int main(){

    char letter;
    float temF, temC;

    cout << "You will write the temperature in Celcius or Fahrenheint? (C/F): ";
    cin >> letter;
    cout << fixed << setprecision(2);

    switch (letter)
    {
        case 'C' :
            cout << "Write the temperature in Celcius: ";
            cin >> temC;
            temF = ((9*temC)/5) + 32;
            cout << "Temperature in Fahrenheint = " << temF << "°F";
            break;

        case 'F' :
            cout << "Write the temperature in Fahrenheint: ";
            cin >> temF;
            temC = ((temF-32) * 5)/9;
            cout << "Temperature in Celcius = " << temC << "°C";
            break;

        default:
            cout << "Wrong letter";
            break;
    }

    return 0;

}