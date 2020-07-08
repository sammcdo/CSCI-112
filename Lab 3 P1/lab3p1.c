/*
 * Programmer: Sam McDowell		Date Completed: July 3, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 3 Problem 1
 *
 * This program draws two houses.
 */

#include <stdio.h> /* printf, getchar definitions */


void draw_triangle(void);
void draw_rectangle(void);

int main(void) {
	/* Draw triangle */
	draw_triangle();

	/* Draw rectangle */
	draw_rectangle();

	/* Display two blank lines */
	printf("\n\n");

	/* Draw triangle */
	draw_triangle();

	/* Draw a rectangle */
	draw_rectangle();

	/* Hold the program open until the user hits a key */
	getchar();

	return(0);
}


/* Draws a triangle */
void draw_triangle(void) {
	printf("    /\\    \n");
	printf("   /  \\   \n");
	printf("  /    \\  \n");
	printf(" /      \\ \n");
	printf("----------\n");
}


/* Draws a rectangle */
void draw_rectangle(void) {
	printf("----------\n");
	printf("|        |\n");
	printf("|        |\n");
	printf("|        |\n");
	printf("----------\n");
}