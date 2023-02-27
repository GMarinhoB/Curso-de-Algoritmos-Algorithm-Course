package algorithmsJava;
import java.util.Scanner;

//Algorithm "Intermediate Odd Sum"
//Subject : [Programming Language and Logic]

//Description : Read 2 integer values ​​X and Y (in any order).
//Next, calculate and display the sum of the odd numbers between them.
//Author: Guilherme Marinho Bernardi
//Current date: 15/02/2023

public class sumOdd {

	public static void main(String[] args) {
		
		int x, y, sum;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Write the value of X: ");
		x = sc.nextInt();
		System.out.print("Write the value of Y: ");
		y = sc.nextInt();
		
		sum = 0;
		
		if (x<y) {
			x+=1;
			for(int i = x; i<y; i++) {
				if(i%2!=0){
					sum+=i;
				}
			}
		}
		else if (x>y) {
			y+=1;
			for(int i = y; i<x; i++) {
				if(i%2!=0){
					sum+=i;
				}
			}
		}
		else System.out.println("The values are the same, no odds between them.");
		
		System.out.println("Sum of the odds: " + sum);
		
		sc.close();
	}	
}
