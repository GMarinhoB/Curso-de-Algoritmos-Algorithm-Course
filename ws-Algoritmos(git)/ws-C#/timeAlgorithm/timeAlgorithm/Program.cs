internal class TimeInSeconds
{
    private static void Main(string[] args)
    {
        int time, hours, minutes, seconds;
        Console.Write("Write the time in seconds: ");
        time = int.Parse(Console.ReadLine());

        hours = (int) time/3600;
        minutes = (int) (time%3600)/60;
        seconds = (int) (time%3600)%60;

        Console.WriteLine("Time: " +hours+ ":" +minutes+ ":" +seconds);
    }
}