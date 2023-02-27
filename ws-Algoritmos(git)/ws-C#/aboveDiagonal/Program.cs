internal class AboveDiagonal
{
    //"Above Diagonal" Algorithm
    // Subject : [Programming Language and Logic]

    // Description : Read an integer N (maximum = 10) and a square matrix
    // of order N containing integers. Show the sum of the elements above the
    // main diagonal. An example of numbers above the diagonal
    //main is shown on the side (in this case the cells with a gray background).

    // Author: Guilherme Marinho Bernardi
    // Current date: 27/02/2023
    private static void Main(string[] args)
    {
        int n, sum;
        sum = 0;

        Console.Write("Write the order of the matrix: ");
        n = int.Parse(Console.ReadLine());

        int [,] mat = new int[n,n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j  < n; j ++)
            {
                Console.Write("Write the value of the [" +i+ "] [" +j+ "] position: ");
                mat[i, j] = int.Parse(Console.ReadLine());
                if(j>i)
                {
                    sum += mat[i, j];
                }
            }
        }

        Console.WriteLine("Sum of the elements above the main diagonal: " +sum);


    }
}