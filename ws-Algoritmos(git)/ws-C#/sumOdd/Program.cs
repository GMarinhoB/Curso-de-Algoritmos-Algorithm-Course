internal class Program
{
    //Algorithm "Intermediate Odd Sum"
    // Subject : [Programming Language and Logic]

    // Description : Read 2 integer values ​​X and Y (in any order).
    //Next, calculate and display the sum of the odd numbers between them.
    // Author: Guilherme Marinho Bernardi
    // Current date: 27/02/2023
    private static void Main(string[] args)
    {
        int x, y, sum;

        Console.Write("Write the value of X: ");
        x = int.Parse(Console.ReadLine());
        Console.Write("Write the value of Y: ");
        y = int.Parse(Console.ReadLine());
        sum = 0;

        if (x < y)
        {
            x += 1;
            for (int i = x; i < y; i++)
            {
                if (i % 2 != 0) { sum += i; }
            }
        }
        else if (x > y)
        {
            y += 1;
            for (int i = y; i < x; i++)
            {
                if (i % 2 != 0) { sum += i; }
            }
        }
        else
        {
            Console.WriteLine("The values are the same, there's no odds between then. ");
        }

        Console.WriteLine("Sum of odds: " +sum);
    }
}