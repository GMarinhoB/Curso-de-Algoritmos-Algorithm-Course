//"Terrain" Algorithm
// Subject : [Programming Language and Logic]
// Description : "Terrain" problem

//Make a program to read the measurements of the width and length of a land
//rectangular with one decimal place, as well as the square meter value
// of the land to two decimal places. Then the program should show the
// value of land area, as well as value of land price, both with
// two decimal places, as in the example.

// Author: Guilherme Marinho Bernardi
// Current date: 13/02/2023

#include <bits/stdc++.h>

using namespace std;

int main () {

    float width, height, sqrMValue, areaValue, terrainValue;

    cout << "Write the width of the terrain: ";
    cin >> width;
    cout << "Write the height of the terrain: ";
    cin >> height;
    cout << "Write the value of the square meter: ";
    cin >> sqrMValue;

    areaValue = width * height;
    terrainValue = areaValue * sqrMValue;

    cout << fixed << setprecision(2);
    cout << "The terrain has " << areaValue << " square meters, and it's value is " << terrainValue << " reais.";

    return 0;
}