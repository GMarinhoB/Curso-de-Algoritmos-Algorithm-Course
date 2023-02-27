using System.Net.NetworkInformation;
using System.Globalization;
internal class TemperatureConversor

{
    //Algorithm "Temperature Conversion"
    // Subject : [Programming Language and Logic]

    // Description : You want to convert a temperature measurement from the scale
    //Celsius to Fahrenheit or vice versa. For this you must build
    //a program that reads the letter "C" or "F" indicating in which scale it will be
    // inform a temperature. Then the program should show the
    //temperature on the other scale with two decimal places.

    // Author: Guilherme Marinho Bernardi
    // Current data: 27/02/2023
    private static void Main(string[] args)
    {
        char letter;
        double F, C;
        CultureInfo CI = CultureInfo.InvariantCulture;

        Console.Write("You will write the temperature in Celsius or Fahrenheint? (C/F) ");
        letter = char.Parse(Console.ReadLine());

        switch (letter)
        {
            case 'C':
                Console.Write("Write the temperature in Celsius: ");
                C = double.Parse(Console.ReadLine());
                F = (C * 1.8) + 32;
                Console.WriteLine("Temperature in Fahrenheint: " +F.ToString("F2", CI)+ "°F");
                break;
            case 'F':
                Console.Write("Write the temperature in Fahrenheint: ");
                F = double.Parse(Console.ReadLine());
                C = (F - 32) / 1.8;
                Console.WriteLine("Temperature in Celcius: " + C.ToString("F2", CI) + "°C");
                break;
            default:
                Console.WriteLine("Wrong letter");
                break;
        }
    }
}