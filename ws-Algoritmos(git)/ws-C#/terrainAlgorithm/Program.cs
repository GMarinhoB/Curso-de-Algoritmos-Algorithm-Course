internal class Terrain
{
    //"Terrain" Algorithm
    // Subject : [Programming Language and Logic]
    // Description : "Terrain" problem

    //Make a program to read the measurements of the width and length of a land
    //rectangular with one decimal place, as well as the square meter value
    // of the land to two decimal places. Then the program should show the
    // value of land area, as well as value of land price, both with
    // two decimal places, as in the example.

    // Author: Guilherme Marinho Bernardi
    // Current date: 27/02/2023
    private static void Main(string[] args)
    {
        double lenght, height, squareMValue, area, terrainValue;

        Console.Write("Write the lenght of the terrain: ");
        lenght = double.Parse(Console.ReadLine());
        Console.Write("Write the height of the terrain: ");
        height = double.Parse(Console.ReadLine());
        Console.Write("Write the value of the square meter of the terrain: ");
        squareMValue = double.Parse(Console.ReadLine());

        area = lenght * height;
        terrainValue = squareMValue * area;

        Console.WriteLine("The terrain has " + area.ToString("F2") + " square meters and coats R$" + terrainValue.ToString("F2"));
    }
}