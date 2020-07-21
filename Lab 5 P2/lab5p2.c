/*
 * Programmer: Sam McDowell		Date Completed: July 15, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 5 Problem 2
 *
 * This program finds the largest and smallest of a set of integers.
 */

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h> /* printf, scanf, getchar definitions */


int main(void) {
	int largest = 0, smallest = 0, temp = 0;
	int loops = 0;

	/* Ask the user how many numbers they need to compare. */
	printf("How many numbers do you want to compare? ");
	scanf("%d", &loops);

	for (int i = 0; i < loops; i++) {
		printf("Enter a number to compare: ");
		scanf("%d", &temp);

		/* Make sure largest and smallest have a proper initial value. */
		if (i == 0) {
			largest = temp;
			smallest = temp;
		}

		/* Check if the number entered is the highest or lowest so far. */
		if (temp > largest) {
			largest = temp;
		}
		if (temp < smallest) {
			smallest = temp;
		}

	}

	/* Display the largest and smallest numbers to the user. */
	printf("\nThe largest number is %d", largest);
	printf("\nThe smallest number is %d\n", smallest);

	/* Hold the program open until the user presses a key. */
	getchar();
	getchar();

	return(0);
}