//Algorithm "Intermediate Odd Sum"
// Subject : [Programming Language and Logic]

// Description : Read 2 integer values X and Y (in any order).
//Next, calculate and display the sum of the odd numbers between them.
// Author: Guilherme Marinho Bernardi
// Current date: 13/02/2023

#include <bits/stdc++.h>

using namespace std;

int main (){

    int x, y, sum;

    cout << "Write the value of X: ";
    cin >> x;
    cout << "Write the value of Y: ";
    cin >> y;

    sum = 0;

    if (x<y)
    {
        x+=1;
        for (x ; x <= y-1; x++)
        {
            if((x%2)!= 0)
            {
                sum += x;
            }
        }   
    }
    
    else if(x>y)
    {
        y+=1;
        for (y ; y <= x-1; y++)
        {
            if((y%2)!=0)
            {
            sum += y;
            }
        } 
    }
    else
    {
        cout << "X and Y are equals, there's not any odd betweem then.";
        return 0;
    }
    
    cout << "The sum is: " << sum;
    
    return 0;
}