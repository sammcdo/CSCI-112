/*
 * Programmer: Sam McDowell		Date Completed: July 2, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Homwork 4 Problem 1B
 *
 * This program calculates the temperature of a freezer
 * in degrees celsius after it has lost power.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf and getchar definitions */

#define MIN_IN_HOUR 60

/* Function Prototypes */
void print_title(void);							/* Prints the title of the program. */
double get_total_hours(void);					/* Given the hours and minutes, calculate the total number of hours */
double calculate_temperature(double hours);		/* Calculates the temperature of the freezer given the time since power loss */
void show_results(double temperature);			/* Shows the results (the temperature in celsius) */


int main(void) {
	double hours = 0.0, minutes = 0.0; /* Hours and minutes hold the input from the user */
	double total_hours = 0.0, temperature = 0.0; /* total_hours stores the converted total time and temperature stores the final temperature of the freezer. */

	/* Print the title of the program. */
	print_title();

	/* Get the number of hours and minutes since power loss. */
	printf("How many hours have elapsed since power loss? ");
	scanf("%lf", &hours);

	printf("\nHow many minutes have elapsed since power loss? ");
	scanf("%lf", &minutes);

	/* Get the total time since power loss from the user. */
	total_hours = get_total_hours(hours, minutes);

	/* Calculate the temperature based on the elapsed time. */
	temperature = calculate_temperature(total_hours);

	/* Show the final formatted temperature to the user. */
	show_results(temperature);
	

	/* Wait for the user to press a key to finish. */
	getchar();
	getchar();

	return(0);
}



/* Prints the title of the program. */
void print_title(void) {
	printf("FREEZER TEMPERATURE SIMULATOR\n\n");
}


/* Given the hours and minutes, calculate the total number of hours */
double get_total_hours(double hours, double minutes) {
	double total_hours = 0; /* The amount of time that has passed since the power loss */

	/* Find the total amount of hours by converting minutes to hours and adding them. */
	total_hours = hours + (minutes / MIN_IN_HOUR);

	return(total_hours);
}


/* Calculates the temperature of the freezer given the time since power loss */
double calculate_temperature(double hours) {
	double temperature = 0; /* The temperature of the freezer in celsius */

	/* Find the temperature by following the formula. */
	temperature = ((4 * hours * hours) / (hours + 2)) - 20;

	return(temperature);
}


/* Shows the results (the temperature in celsius) */
void show_results(double temperature) {
	/* Show the user the estimated temperature. */
	printf("\nThe current temperature of the freezer is %.2f degrees celsius.\n", temperature);
}