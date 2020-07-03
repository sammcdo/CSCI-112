/*
 * Programmer: Sam McDowell		Date Completed: July 3, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Homework 4 Problem 1C
 *
 * This program converts temperatures from fahrenheit to kelvin.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* Include definitions for printf, scanf and getchar. */


void print_title(void);							/* Prints the program title. */
double get_fahrenheit(void);					/* Asks the user for a temperature in Fahrenheit. */
double convert_kelvin(double fahrenhiet);		/* Converts a temperature from Fahrenheit to Kelvin. */
void print_results(double kelvin);				/* Prints the formatted results. */


int main(void) {
	double fahrenheit = 0, kelvin = 0; /* fahrenheit holds the input from the user, kelvin stores the converted output */

	/* Print the program title. */
	print_title();

	/* Ask the user for a temperature in Fahrenheit. */
	fahrenheit = get_fahrenheit();

	/* Convert the temperature from Fahrenheit to Kelvin. */
	kelvin = convert_kelvin(fahrenheit);

	/* Print the formatted results. */
	print_results(kelvin);

	/* Wait for the user to hit a key to finish the program. */
	getchar();
	getchar();

	return(0);
}


/* Prints the program title. */
void print_title(void) {
	printf("FAHRENHEIT TO KELVIN CONVERTER\n\n");
}


/* Asks the user for a temperature in Fahrenheit. */
double get_fahrenheit(void) {
	double fahrenheit = 0; /* Stores the temperature from the user */

	/* Get the temperature in fahrenheit from the user. */
	printf("What is the temperature in Fahrenheit? ");
	scanf("%lf", &fahrenheit);
	
	return(fahrenheit);
}


/* Converts a temperature from Fahrenheit to Kelvin. */
double convert_kelvin(double fahrenheit) {
	double kelvin = 0;

	/* Calculate the temperature in kelvin using this conversion formula. */
	kelvin = 5.0 / 9.0 * (fahrenheit - 32) + 273.15;

	return(kelvin);
}


/* Prints the formatted results. */
void print_results(double kelvin) {
	/* Display the results to the user. */
	printf("\nThe temperature in Kelvin is %.2f\n", kelvin);
}