/*
 * Programmer: Sam McDowell		Date Completed: July 1, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 2 Problem 1A
 * 
 * This program calculates mileage reimbursement by asking 
 * the user for odometer readings and calculating the payout.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf, getchar definitions */
#define REIMBURSEMENT_RATE 0.35 /* The reimbursement per mile in dollars */


int main(void) {
	double odo_start = 0, odo_end = 0, /* odo_start and odo_end store the odometer readings form the user */
		miles_traveled = 0, reimbursement = 0; /* miles_traveled stores the total number of miles the user traveled and reimbursement holds the final payout */

	printf("MILEAGE REIMBURSEMENT CALCULATOR\n\n");

	/* Get the starting and ending odometer reading from the user as a double */
	printf("Enter the beginning odometer reading: ");
	scanf("%lf", &odo_start);

	printf("Enter the final odometer reading: ");
	scanf("%lf", &odo_end);

	/* Calculate the total number of miles traveled */
	miles_traveled = odo_end - odo_start;

	/* Calculate reimbursement by multiplying the total miles by the reimbursement rate. */
	reimbursement = REIMBURSEMENT_RATE * miles_traveled;

	/* Show the user the results. */
	printf("\nYou traveled %.2f miles. ", miles_traveled);
	printf("At $%.2f per mile, your reimbursement is $%.2f\n", REIMBURSEMENT_RATE, reimbursement);

	/* Wait for the user to press a key to finish. */
	getchar();
	getchar();

	return(0);
}