/*
 * Programmer: Sam McDowell		Date Completed: July 1, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 *
 * A simple function that asks me for a
 * number and prints it back to me.
 */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* Include definitions for printf, scanf, and getchar */

void echo_number(void); /* The function prototype */

int main(void) {
	/* Call the function to ask for and repeat a number. */
	echo_number();

	/* Hold the program open after the function returns. */
	getchar();
	getchar();

	return (0);
}

/* Ask the user for a number and repeat it back. */
void echo_number(void) {
	double user_number;

	/* Print a prompt and save the response to user_number. */
	printf("Enter a number: ");
	scanf("%lf", &user_number);

	/* Echo the number to the user. */
	printf("Sam McDowell, your number was %f.\n", user_number);
}