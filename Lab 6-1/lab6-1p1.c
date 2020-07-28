/*
 * Programmer: Sam McDowell		Date Completed: July 22, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 6-1 Problem 1
 *
 * This program calculates change.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf, getchar definitions */

/* Function prototypes */
void getPaid(float* paid, float* due);		/* Get the amount the customer paid */
void makeChange(float paid, float due, int* dollar, int* qtr, int* dime, int* nkl, int* pen);	/* Calculate the change to give the customer  */
void printResults(float paid, float due, int dollar, int qtr, int dime, int nkl, int pen);
double round(double number);		/* Round the number to two decimal places */

void main()
{
	int dollar = 0, qtr = 0, dime = 0, nkl = 0, pen = 0;
	float paid = 0.0, due = 0.0;

	getPaid(&paid, &due);
	makeChange(paid, due, &dollar, &qtr, &dime, &nkl, &pen);
	printResults(paid, due, dollar, qtr, dime, nkl, pen);

	/* Hold the program open until the user hits a key */
	getchar();
	getchar();

	return(0);
}


/* Get the amount the customer paid */
void getPaid(float* paid, float* due) {
	int condition = 0;

	/* Repeat until the user enters valid numbers */
	do {
		printf("Enter the amount due: ");
		scanf("%f", due);
		printf("Enter the amount paid: ");
		scanf("%f", paid);
		condition = (*paid > *due && *paid < 20);
	} while (!condition);
}


/* Calculate the change to give the customer  */
void makeChange(float paid, float due, int* dollar, int* qtr, int* dime, int* nkl, int* pen) {
	int change;
	double temp = 0;

	/* In some cases temp will be 0.001 less than the actual value
	so rounding must be used. */
	temp = (double) paid - (double) due;
	change = round(temp) * 100;

	/* Change is calculated using integer division and remainders */
	*dollar = change / 100;
	change %= 100;

	*qtr = change / 25;
	change %= 25;

	*dime = change / 10;
	change %= 10;

	*nkl = change / 5;
	change %= 5;

	*pen = change;
}


/* Print the change for the user */
void printResults(float paid, float due, int dollar, int qtr, int dime, int nkl, int pen) {
	printf("\nChange: $%.2f\n\n", paid - due);
	printf("Dollars: %d\nQuarters: %d\nDimes: %d\nNickels: %d\nPennies: %d\n", dollar, qtr, dime, nkl, pen);
}


/* Round the number to two decimal places */
double round(double number) {
	/* The way this works is  */
	int rounded = 0;

	/* Move the decimal 3 places right, round and move it back. The result is a number with 3 decimal places rounded to two. */
	rounded = number * 100 + 0.5; /* Move three decimal places right and add 5 to round */
	number = rounded / 100.0; /* move three decimal places left and convert back to double */

	return number;
}