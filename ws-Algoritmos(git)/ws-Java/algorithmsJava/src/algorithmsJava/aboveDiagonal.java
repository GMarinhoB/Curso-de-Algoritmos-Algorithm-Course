package algorithmsJava;
import java.util.Scanner;

//"Above Diagonal" Algorithm
//Subject : [Programming Language and Logic]

//Description : Read an integer N (maximum = 10) and a square matrix
//of order N containing integers. Show the sum of the elements above the
//main diagonal. An example of numbers above the diagonal
//main is shown on the side (in this case the cells with a gray background).

//Author: Guilherme Marinho Bernardi
//Current date: 23/02/2023

public class aboveDiagonal {

	public static void main(String[] args) {
		
		int n, sum;
		
		Scanner sc = new Scanner(System.in);
		System.out.print("Write the order of the matrix: ");
		n = sc.nextInt();
		
		int [][] mat = new int [n][n];
		
		
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++) {
				System.out.print("Write the number of the [" + i + "] [" + j + "] position: ");
				mat[i][j] = sc.nextInt();
		}
		}
		
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
		{
				if(i < j) { sum += mat[i][j]; }
		}
		}
		
		System.out.println("Sum of the positions above the main diagonal: " + sum);
	
		sc.close();
	}
	
}
