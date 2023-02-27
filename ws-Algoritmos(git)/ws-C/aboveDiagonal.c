//"Above Diagonal" Algorithm
// Subject : [Programming Language and Logic]

// Description : Read an integer N (maximum = 10) and a square matrix
// of order N containing integers. Show the sum of the elements above the
// main diagonal. An example of numbers above the diagonal
//main is shown on the side (in this case the cells with a gray background).

// Author: Guilherme Marinho Bernardi
// Current date: 09/02/2023

#include <stdio.h>

int main(){

    int sum, n;
    sum=0;

    printf("Write the order of the matrix: ");
    scanf("%d", &n);
    int mat [n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Write the value of the position [%d][%d]: ", i, j);    
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                sum += mat[i][j];
            }
        }}

    printf("Sum of the elements above the main diagonal is: %d", sum);

    return 0;
}