/*
 * Programmer: Sam McDowell		Date Completed: July 15, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 5 Problem 4
 *
 * This program determines if a number is divisible by 9
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>		/* printf, scanf, getchar definitions */
#include <math.h>		/* pow definition */


int get6DigitNumber(void);			/* Get a 6 digit number from the user */
int isDivisibleBy9(int number);		/* Check if a 6 digit number is divisible by 9 */


int main(void) {
	int number = 0;

	/* Get a 6 digit number from the user */
	number = get6DigitNumber();

	/* Check if it is divisible by 9 */
	if (isDivisibleBy9(number)) {
		printf("\nThe number is divisible by 9\n");
	}
	else {
		printf("\nThe number is not divisible by 9\n");
	}
	
	/* Hold the program open until the user presses a key. */
	getchar();
	getchar();

	return(0);
}


/* Get a 6 digit number from the user */
int get6DigitNumber(void) {
	int number = 0;

	/* Repeat until the user enters a 6 digit number */
	while (!(number > 99999 && number < 1000000)) {
		/* Ask the user for a number */
		printf("Enter a 6 digit number number: ");
		scanf("%d", &number);
	}

	return(number);
}


/* Check if a 6 digit number is divisible by 9 */
int isDivisibleBy9(int number) {
	int sum = 0, temp = 0;
	
	/* Divisibility Algorithm:
	1. Get the sum of all the digits
		1.1 Use a for loop from 10 to 1000000 counting by 10s
		    Use modulo to get each place and integer division to remove unnecessary digits
				Ex 123456: at loop 4, i will be 10000, and 123456 % 10000 is 3456.
				Then integer divide by 1000 to get 3, the 4th digit from the right.
	2. Check if the sum is divisible by 9
		2.1 If it is, the whole number is divisible by 9
	*/
	for (int i = 10; i <= 1000000; i *= 10) {
		temp = number % i / (i / 10);
		sum += temp;
	}

	/* If the sum of the digits divided by 9 has a remainder of 0, it is divisible. */
	if (sum % 9 == 0) {
		return(1);
	}
	else {
		return(0);
	}
}