/*
 * Programmer: Sam McDowell		Date Completed: July 2, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 2 Problem 1C
 *
 * This program converts temperatures from fahrenheit to kelvin.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* Include definitions for printf, scanf and getchar. */


int main(void) {
	double fahrenheit = 0, kelvin = 0; /* fahrenheit holds the input from the user, kelvin stores the converted output */

	printf("FAHRENHEIT TO KELVIN CONVERTER\n\n");

	/* Get the temperature in fahrenheit from the user. */
	printf("What is the temperature in Fahrenheit? ");
	scanf("%lf", &fahrenheit);

	/* Calculate the temperature in kelvin using this conversion formula. */
	kelvin = 5.0 / 9.0 * (fahrenheit - 32) + 273.15;

	/* Display the results to the user. */
	printf("\nThe temperature in Kelvin is %.2f\n", kelvin);

	/* Wait for the user to hit a key to finish the program. */
	getchar();
	getchar();

	return(0);
}