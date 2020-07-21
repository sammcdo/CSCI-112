/*
 * Programmer: Sam McDowell		Date Completed: July 16, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 5 Problem 6
 *
 * This program prints two triangles
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf, getchar definitions */

#define TRIANGLE_HEIGHT 9 // The height of the triangles

int main(void) {
	/* Draw a right triangle. */
	for (int i = 1; i <= TRIANGLE_HEIGHT; i++) {
		/* Print the appropriate number of stars */
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		/* Move to the next line and repeat */
		printf("\n");
	}

	/* Add some spacing */
	printf("\n\n");

	/* Draw the opposite triangle. */
	for (int i = 0; i < TRIANGLE_HEIGHT; i++) {
		/* Draw the appropriate number of spaces */
		for (int j = 0; j < i; j++) {
			printf(" ");
		}
		/* Draw the appropriate number of stars */
		for (int k = 0; k < TRIANGLE_HEIGHT - i; k++) {
			printf("*");
		}
		/* Move to the next line and repeat */
		printf("\n");
	}

	/* Hold the program open until the user presses a key. */
	getchar();
	getchar();

	return(0);
}