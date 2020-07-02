/*
 * Programmer: Sam McDowell		Date Completed: July 1, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 2 Problem 1B
 *
 * This program calculates the temperature of a freezer
 * in degrees celsius after it has lost power.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf and getchar definitions */

#define MIN_IN_HOUR 60


int main(void) {
	double hours = 0, minutes = 0; /* Hours and minutes hold the input from the user */
	double total_hours = 0, temperature = 0; /* total_hours stores the converted total time and temperature stores the final temperature of the freezer */

	printf("FREEZER TEMPERATURE SIMULATOR\n\n");

	/* Get the number of hours and minutes since power loss. */
	printf("How many hours have elapsed since power loss? ");
	scanf("%lf", &hours);

	printf("\nHow many minutes have elapsed since power loss? ");
	scanf("%lf", &minutes);

	/* Find the total amount of hours by converting minutes to hours and adding them. */
	total_hours = hours + (minutes / MIN_IN_HOUR);

	/* Find the temperature by following the formula. */
	temperature = ((4 * total_hours * total_hours) / (total_hours + 2)) - 20;

	/* Show the user the estimated temperature. */
	printf("\nThe current temperature of the freezer is %.2f degrees celsius.\n", temperature);

	/* Wait for the user to press a key to finish. */
	getchar();
	getchar();

	return(0);
}