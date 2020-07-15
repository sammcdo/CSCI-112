/*
 * Programmer: Sam McDowell		Date Completed: July 9, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 4-1 Problem 3
 *
 * This program characterizes earthquakes based on where they are on the Richter Scale.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf, getchar definitions */


int main(void) {
	double measurement = 0.0; /* Stores the earthquake's Richter Scale number. */

	/* Get the earthquake's measurement from the user */
	printf("Enter the Richter Scale Measurement of the earthquake: ");
	scanf("%lf", &measurement);

	/* Check the measured reading and report typical damages. */
	if (measurement <= 5.0) {
		printf("Little or no damage.\n");
	}
	else if (measurement <= 5.5) {
		printf("Some damage.\n");
	}
	else if (measurement <= 6.5) {
		printf("Sreious damage: walls may crack or fall.\n");
	}
	else if (measurement <= 7.5) {
		printf("Disaster: houses and buildings may collapse.\n");
	}
	else {
		printf("Catastrophic: Most buildings destroyed.\n");
	}

	/* Hold the program open until the user presses a key. */
	getchar();
	getchar();

	return(0);
}