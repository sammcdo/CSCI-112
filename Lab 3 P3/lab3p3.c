/*
 * Programmer: Sam McDowell		Date Completed: July 3, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 3 Problem 3
 *
 * This program rounds a positive number to two decimal places.
 * However it is not perfect. If a number is stored weirdly
 * It cannot round correctly. For example, 69.945 stores as
 * 69.944999... and so it is "incorrectly" rounded to 69.94
 * (However, 2.535 correctly stores and rounds to 2.54)
 * Any attempt to fix this error led to more incorrect roundings.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf, getchar definitions */


double round(double number); /* Round the number to two decimal places */
void show_number(double number); /* Output a number to the user. */


int main(void) {
	double number = 0.0;

	/* Get a number to round from the user */
	printf("Enter a number: ");
	scanf("%lf", &number);

	/* Round the number to two decimla places. */
	number = round(number);

	/* Output the number to the user. */
	show_number(number);

	/* Hold the program open unitl the user presses a key. */
	getchar();
	getchar();

	return(0);
}

double round(double number) {
	/* The way this works is  */
	int rounded = 0;
	
	/* Move the decimal 3 places right, round and move it back. The result is a number with 3 decimal places rounded to two. */
	rounded = number * 100 + 0.5; /* Move three decimal places right and add 5 to round */
	number = rounded / 100.0; /* move three decimal places left and convert back to double */

	return number;
}


/* Prints a number to the user */
void show_number(double number) {
	/* Print out the number formatted to 2 decimal places. */
	printf("\nThe number rounds to %.2f\n", number);
}