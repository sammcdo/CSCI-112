/*
 * Programmer: Sam McDowell		Date Completed: July 16, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 5 Problem 5
 *
 * This program gets 5 numbers from 1-30 from the user
 * and draws a graph from them out of stars.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf, getchar definitions */


void drawStars(int stars);	/* Draw a line of stars */


int main(void) {
	int stars = 0; /* Temporary storage for the number entered by the user */
	/* Storage for each data point of the graph */
	int one = 0, two = 0, three = 0;
	int four = 0, five = 0;

	/* Repeat until 5 data points have been collected */
	for (int i = 1; i <= 5; i++) {
		/* Aks the user for a number of stars */
		printf("Enter the number of stars: ");
		scanf("%d", &stars);

		/* If the number is valid, store it */
		if (stars >= 1 && stars <= 30) {
			/* Depending on which loop this is, store the number in the proper variable */
			switch (i) {
				case 1:
					one = stars;
					break;
				case 2:
					two = stars;
					break;
				case 3:
					three = stars;
					break;
				case 4:
					four = stars;
					break;
				case 5:
					five = stars;
					break;
			}
		}
		/* If the number is invalid, warn the user and decrement i */
		else {
			printf("Please enter a number between 1 and 30.\n");
			i--; /* This will make i be the same number after the loop that it is currently. */
		}
	}

	printf("\nGRAPH\n\n");

	/* Draw the graph */
	drawStars(one);
	drawStars(two);
	drawStars(three);
	drawStars(four);
	drawStars(five);

	/* Hold the program open until the user presses a key */
	getchar();
	getchar();

	return(0);
}


/* Draw a line of stars */
void drawStars(int stars) {
	/* Repeatedly print a * the input amount of times */
	for (int i = 1; i <= stars; i++) {
		printf("*");
	}
	/* Add some spacing */
	printf("\n");
}