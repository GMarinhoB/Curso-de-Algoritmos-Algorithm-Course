package algorithmsJava;
import java.util.Scanner;

public class gamingTime {

	//Algorithm "GamingTime"
	// Subject : [Programming Language and Logic]

	// Description : Read the start time and end time of a game.
	//Then calculate the duration of the game, knowing that it can start
	// in one day and finish in another, with a minimum duration of 1 hour
	//and maximum of 24 hours.

	// Author: Guilherme Marinho Bernardi
	// Current date: 15/02/2023
	
	public static void main(String[] args){
		
		int sHour, fHour, totalTime;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Write the start time of the game: ");
		sHour = sc.nextInt();
		System.out.print("Write the end time of the game: ");
		fHour = sc.nextInt();
		
		if(sHour < fHour) {
			totalTime = fHour - sHour;
			System.out.println("Total time: " + totalTime);
		}
		else if (sHour == fHour) {
			System.out.println("Total time: 24 hours");
		}
		else {
			totalTime = 24 - sHour;
			totalTime += fHour;
			System.out.println("Total time: " + totalTime);
		}
		sc.close();
	}
	
	
}
