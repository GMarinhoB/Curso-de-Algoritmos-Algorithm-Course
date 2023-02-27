//"Above Diagonal" Algorithm
// Subject : [Programming Language and Logic]

// Description : Read an integer N (maximum = 10) and a square matrix
// of order N containing integers. Show the sum of the elements above the
// main diagonal. An example of numbers above the diagonal
//main is shown on the side (in this case the cells with a gray background).

// Author: Guilherme Marinho Bernardi
// Current date: 13/02/2023

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, sum;

    cout << "Write the order of the matriz: ";
    cin >> n;

    int mat [n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Write the value of the position [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }
    
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j>i)
            {
                sum += mat[i][j];
            }
        }
    }

    cout << "Sum of the positions above the diagonal: " << sum;

    return 0;
}