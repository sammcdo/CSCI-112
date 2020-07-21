/*
 * Programmer: Sam McDowell		Date Completed: July 15, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 5 Problem 1
 *
 * This program calculates the average of a list of integers.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>			/* printf, scanf, getchar definitions */

#define SENTINEL 9999		/* The number to define the last input in a loop */

double average(int sum, int count);		/* Calculate an average from the sum and the count of the numbers. */

int main(void) {
	double avg = 0.0; /* The average of the numbers entered */
	int count = 0, sum = 0, temp = 0; /* the number count, the sum of the integers amd a temporary location for the input */

	/* Print instructions to the user */
	printf("Enter the numbers to average (9999 to quit)\n");

	/* Get input from the user */
	do {
		scanf("%d", &temp);
		if (temp != SENTINEL) {
			count += 1;
			sum += temp;
		}
	} while (temp != SENTINEL);

	/* If it is possible to calculate the average, do it, if not, tell the user they did not enter enough numbers. */
	if (count >= 2) {
		avg = average(sum, count);
		printf("The average is %.2f\n", avg);
	}
	else {
		printf("More numbers should be entered to calculate an average.\n");
	}

	/* Hold the program open until the users hits a key */
	getchar();
	getchar();

	return(0);
}


/*
 * Calculate an average from the sum and the count of the numbers.
 */
double average(int sum, int count) {
	/* Convert sum to a double and divide by count to calculate the average. */
	return(sum * 1.0 / count);
}