/*
 * Programmer: Sam McDowell		Date Completed: July 29, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 7 Problem 1
 *
 * This program demonstrates some uses for arrays.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>		/* printf, scanf, getchar definitions */

#define SENTINEL -9999	/* The data input sentinel */
#define ARRAY_SIZE 100	/* The size of the numbers array */


int main(void) {
	int numbers[ARRAY_SIZE] = { 0 };	/* The array used for demonstration. */
	int i = 0, temp = 0;				/* i is a counter variable and a multipurpose temporary storage variable. */

	/* Fill the array with user input until they enter the sentinel */
	printf("Enter an integer (%d to quit) ", SENTINEL);
	scanf("%d", &temp);
	while (i < ARRAY_SIZE && temp != SENTINEL) { // repeat until the list is full or the sentinel is hit.
		/* Shoudl the last number entered be valid, enter it in the array */
		numbers[i] = temp;
		i++;

		/* Ask for another number */
		printf("Enter an integer (%d to quit) ", SENTINEL);
		scanf("%d", &temp);
	}

	/* Show the user the numbers they entered */
	printf("Here are the numbers you entered: ");
	for (int j = 0; j < i; j++) { // i stores the index where the sentinel was entered
		printf(" %d", numbers[j]);
	}
	printf("\n\n");

	/* Multiply ever number in the array by an incrementing counter */
	for (int k = 0; k < ARRAY_SIZE; k++) {
		numbers[k] = numbers[k] * k;
	}

	/* Ask the user for 5 indexes to examine. */
	for (int l = 0; l < 5; l++) {
		printf("Enter an array index to check: ");
		scanf("%d", &temp);
		/* Make sure it is a valid index */
		if (temp >= 0 && temp <= ARRAY_SIZE)
			printf("\tThe value at index %d is %d\n", temp, numbers[temp]);
		else
			printf("\t%d is not a valid index.\n", temp);
	}

	/* Wait for the user to press a key */
	getchar();
	getchar();

	return(0);
}