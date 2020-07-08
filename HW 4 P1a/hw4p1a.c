/*
 * Programmer: Sam McDowell		Date Completed: July 2, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Homework 4 Problem 1A
 * 
 * This program calculates mileage reimbursement by asking 
 * the user for odometer readings and calculating the payout.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf, getchar definitions */
#define REIMBURSEMENT_RATE 0.35 /* The reimbursement per mile in dollars */


/* Function Prototypes */
void print_title(void);												/* Prints the program title. */
double calculate_miles_traveled(double odo_start, double odo_end);  /* Find the total distance traveled based on odometer readings. */
double calculate_reimbursement(double miles_traveled);				/* Caclulates the reimbursement given the odometry readings. */
void show_results(double miles_traveled, double reimbursement);		/* Show the formatted results including the total distance traveled, the reimbursement rate and the final reimbursement amount. */


int main(void) {
	double odo_start = 0, odo_end = 0; /* odo_start and odo_end store the odometer readings form the user */
	double miles_traveled = 0, reimbursement = 0; /* miles_traveled stores the total number of miles the user traveled and reimbursement holds the final payout */

	/* Print the program title */
	print_title();

	/* Get the starting and ending odometer reading from the user as a double */
	printf("Enter the beginning odometer reading: ");
	scanf("%lf", &odo_start);

	printf("Enter the final odometer reading: ");
	scanf("%lf", &odo_end);

	/* Calculate the total number of miles traveled */
	miles_traveled = calculate_miles_traveled(odo_start, odo_end);

	/* Calculate the reimbursement from the total number of miles traveled. */
	reimbursement = calculate_reimbursement(miles_traveled);

	/* Show the results including miles traveled, reimbursement rate and the reimbursement. */
	show_results(miles_traveled, reimbursement);

	/* Wait for the user to press a key to finish. */
	getchar();
	getchar();

	return(0);
}


/* Prints the program title. */
void print_title(void) {
	printf("MILEAGE REIMBURSEMENT CALCULATOR\n\n");
}


/* Find the total distance traveled given odometer readings. */
double calculate_miles_traveled(double odo_start, double odo_end) {
	double miles_traveled = 0.0; /* Stores the total distance traveled */

	/* Calculate the total distance traveled */
	miles_traveled = odo_end - odo_start;

	return miles_traveled;
}


/* Caclulates the reimbursement given the total distance traveled in miles. */
double calculate_reimbursement(double miles_traveled) {
	double reimbursement = 0; /* reimbursement stores the repayment amount */


	/* Calculate reimbursement by multiplying the total miles by the reimbursement rate. */
	reimbursement = REIMBURSEMENT_RATE * miles_traveled;

	return reimbursement;
}


/* Show the formatted results including the total distance traveled, the reimbursement rate and the final reimbursement amount. */
void show_results(double miles_traveled, double reimbursement) {
	/* Show the user the results. */
	printf("\nYou traveled %.2f miles. ", miles_traveled);
	printf("At $%.2f per mile, your reimbursement is $%.2f\n", REIMBURSEMENT_RATE, reimbursement);
}