package algorithmsJava;
import java.util.Scanner;

public class timeAlgorithm {
	
	//"Time" Algorithm
	// Subject : [Programming Language and Logic]
	// Description : Problem "duration"

	//Make a program to read a time duration in seconds,
	//then print this duration on the screen in hours:minutes:seconds format.

	// Author: Guilherme Marinho Bernardi
	// Current date: 02/02/2023
	
	public static void main(String[] args) {
		
		int time, hours, minutes, seconds;
		
		System.out.print("Write the time in seconds: ");
		Scanner sc = new Scanner(System.in);
		time = sc.nextInt();
		
		hours = (int) time/3600;
		minutes = (int) (time%3600)/60;
		seconds = (time%3600)%60;
		
		System.out.println("Time: " +hours+ ":" +minutes+ ":" +seconds);
		
		sc.close();
	}
}


