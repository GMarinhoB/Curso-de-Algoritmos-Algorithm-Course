package algorithmsJava;
import java.util.Scanner;
import java.util.Locale;

//Algorithm "Temperature Conversion"
//Subject : [Programming Language and Logic]

//Description : You want to convert a temperature measurement from the scale
//Celsius to Fahrenheit or vice versa. For this you must build
//a program that reads the letter "C" or "F" indicating in which scale it will be
//inform a temperature. Then the program should show the
//temperature on the other scale with two decimal places.

//Author: Guilherme Marinho Bernardi
//Current date: 14/02/2023

public class temperatureConversor {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		char letter;
		float F, C;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("You will write the temperaute in Celcius or Fahrenheits? (C/F): ");
		letter = sc.next().charAt(0);
		
		switch (letter) {
			case 'F':
				System.out.print("Write the temperature in Fahrenheit: ");
				F = sc.nextFloat();
				C = ((F-32) * 5)/9;
				System.out.println("Temperature in Celcius: " + String.format("%.2f", C) + "°C");
			break;
			case 'C':
				System.out.print("Write the temperature in Celcius: ");
				C = sc.nextFloat();
				F = ((9*C)/5) + 32;
				System.out.println("Temperature in Fahrenheit: " + String.format("%.2f", F) + "°F");
			break;
			default:
				System.out.println("Wrong letter");
				break;
	}
		sc.close();
}
}
