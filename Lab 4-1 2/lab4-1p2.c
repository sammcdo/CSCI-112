/*
 * Programmer: Sam McDowell		Date Completed: July 8, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 4-1 Problem 2
 *
 * This program outputs the contents of a gas cylinder
 * based on its color.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf, getchar definitions */

void processColor(char color);		/* Process the cylinder's contents based on the color and tell it to the user. */

int main(void) {
	char color = "";

	/* Get color from the user as a single character representing the first letter of the color. */
	printf("Enter the first letter of the color of the cylinder: ");
	scanf("%c", &color);

	/* Process the cylinder's contents based on the color and tell it to the user. */
	processColor(color);

	/* Hold the program open until the user presses a key. */
	getchar();
	getchar();

	return(0);
}


/* Process the cylinder's contents based on the color and tell it to the user. */
void processColor(char color) {
	switch (color) {
		/* If the cylinder is orange, it contains Ammonia. */
		case 'O':
		case 'o':
			printf("\nThe cylinder contains Ammonia.\n");
			break;

		/* If the cylinder is brown, it contains Carbon Monoxide. */
		case 'B':
		case 'b':
			printf("\nThe cylinder contains Carbon Monoxide.\n");
			break;

		/* If the cylinder is yellow, it contains Hydrogen. */
		case 'Y':
		case 'y':
			printf("\nThe cylinder contains Hydrogen.\n");
			break;

		/* If the cylinder is green, it contains Oxygen. */
		case 'G':
		case 'g':
			printf("\nThe cylinder contains Oxygen.\n");
			break;

		default:
			printf("Contents unknown.");
	}
}
