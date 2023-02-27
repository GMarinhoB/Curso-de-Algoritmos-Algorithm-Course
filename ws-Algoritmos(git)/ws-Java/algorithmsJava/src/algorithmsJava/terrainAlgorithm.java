package algorithmsJava;
import java.util.Scanner;
import java.util.Locale;

//"Terrain" Algorithm
//Subject : [Programming Language and Logic]
//Description : "Terrain" problem

//Make a program to read the measurements of the width and length of a land
//rectangular with one decimal place, as well as the square meter value
//of the land to two decimal places. Then the program should show the
//value of land area, as well as value of land price, both with
//two decimal places, as in the example.

//Author: Guilherme Marinho Bernardi
//Current date: 14/02/2023

public class terrainAlgorithm {

	public static void main(String[] args) {
		
		float width, length, squareMPrice, area, terrainValue;
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		System.out.print("Wrtite the width of the terrain: ");
		width = sc.nextFloat();
		System.out.print("Write the length of the terrain: ");
		length = sc.nextFloat();
		System.out.print("Write the value of the square meter: ");
		squareMPrice = sc.nextFloat();
		
		area = width * length;
		terrainValue = area * squareMPrice;
		
		System.out.println("The terrain has " +String.format("%.2f", area)+ " meters and coasts " +String.format("%.2f", terrainValue)+ " reais.");
		sc.close();
	}
}
