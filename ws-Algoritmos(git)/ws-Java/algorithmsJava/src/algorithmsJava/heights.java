package algorithmsJava;
import java.util.Locale;
import java.util.Scanner;

//Algorithm "Heights"
//Subject : [Programming Language and Logic]

//Description : Make a program to read name, age and height of N people,
//according to example. Then, show on the screen the average height of the people,
//and also show the percentage of people under 16,
//as well as the names of these people if any.

//Author: Guilherme Marinho Bernardi
//Current date: 23/02/2023
public class heights {

	private static void clearBuffer(Scanner scanner) {
        if (scanner.hasNextLine()) {
            scanner.nextLine();
        }
	}
	
	
public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int n, lower;
		float avgHeight, sumHeights, percentage;
		Locale.setDefault(Locale.US);
				
		
		System.out.print("How many persons will be registered? ");
		n = sc.nextInt();
		
		String [] names = new String[n];
		int [] ages = new int[n];
		float [] heights = new float [n];
		
		for(int i = 0; i<n; i++) {
			clearBuffer(sc);
			System.out.print("Insert the name of the " + i + " person: ");
			names[i] = sc.nextLine();
			System.out.print("Insert the age of the " + i + " person: ");
			ages[i] = sc.nextInt();
			System.out.print("Insert the height of the " + i + " person: ");
			heights[i] = sc.nextFloat();
			
		}
		
		sumHeights = 0;
		
		for (int i = 0; i < n; i++) {
			sumHeights += heights[i];
		}
		
		avgHeight = (sumHeights/n);
		System.out.println("Average heights: " +String.format("%.2f", avgHeight) );
		
		lower = 0;
		for (int i = 0; i < n; i++) {
			if (ages[i] < 16) {
				lower++;
			}
		}
		
		percentage = (lower*100)/n;
		System.out.println("Percentagem of people younger than 16 years: " +percentage+ "%");
		
		for (int i = 0; i < n; i++) {
			if (ages[i] < 16) System.out.println(names[i]);
		}
		
		
		sc.close();
	}	
}
