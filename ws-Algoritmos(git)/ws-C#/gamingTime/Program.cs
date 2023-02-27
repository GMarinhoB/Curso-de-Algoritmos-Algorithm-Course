internal class GamingTime
{

    //Algorithm "GameTime"
    // Subject : [Programming Language and Logic]

    // Description : Read the start time and end time of a game.
    //Then calculate the duration of the game, knowing that it can start
    // in one day and finish in another, with a minimum duration of 1 hour
    //and maximum of 24 hours.

    // Author: Guilherme Marinho Bernardi
    // Current date: 27/02/2023
    private static void Main(string[] args)
    {
        int sTime, fTime, totalTime;
        Console.Write("Write the time that the game started: ");
        sTime = int.Parse(Console.ReadLine());
        Console.Write("Write the time that the game ended: ");
        fTime = int.Parse(Console.ReadLine());

        if (sTime<fTime)
        {
            totalTime = fTime - sTime;
            Console.WriteLine("The total time was: " +totalTime+ " hours");
        }
        else if (sTime == fTime)
        {
            Console.WriteLine("The total time was 24 hours.");
        }
        else
        {
            totalTime = (24 - sTime);
            totalTime += fTime;
            Console.WriteLine("The total time was: " + totalTime + " hours.");
        }
    }
}