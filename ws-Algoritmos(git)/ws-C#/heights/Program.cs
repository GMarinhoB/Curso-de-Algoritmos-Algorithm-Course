internal class Heights
{
    //Algorithm "Heights"
    // Subject : [Programming Language and Logic]

    // Description : Make a program to read name, age and height of N people,
    //according to example. Then, show on the screen the average height of the people,
    //and also show the percentage of people under 16,
    // as well as the names of these people if any.

    // Author: Guilherme Marinho Bernardi
    // Current date: 27/02/2023

    private static void Main(string[] args)
    {
        int n, peopleYounger;
        double avgHeight, sumHeight, percentage;

        Console.Write("How many people will be registred? ");
        n = int.Parse(Console.ReadLine());

        string[] names = new string[n];
        int[] ages = new int[n];
        double[] heights = new double[n];

        for (int i = 0; i < n; i++)
        {
            Console.Write("Write the name of the " +i+ " person: ");
            names[i] = Console.ReadLine();
            Console.Write("Write the age of the " + i + " person: ");
            ages[i] = int.Parse(Console.ReadLine());
            Console.Write("Write the height of the " + i + " person: ");
            heights[i] = double.Parse(Console.ReadLine());
        }

        sumHeight = 0;
        for (int i = 0; i < n; i++)
        {
            sumHeight += heights[i];
        }
        avgHeight = sumHeight / n;

        peopleYounger = 0;
        for (int i = 0; i < n; i++)
        {
            if (ages[i] < 16)
            { peopleYounger++; }
        }
        percentage = (peopleYounger * 100) / n;
        Console.WriteLine("People younger than 16 years: " +percentage.ToString("F2")+ "%");

        for (int i = 0; i < n; i++)
        {
            if (ages[i] < 16)
            { Console.WriteLine(names[i]); }
        }


    }
}