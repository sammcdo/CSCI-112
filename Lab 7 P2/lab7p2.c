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

/* --- FUNCTION PROTOTYPES --- */
int fillArray(int fill[], int length);				/* This function fills an array with inputs from the user. */
void printUserNumbers(int numbers[], int count);	/* This function prints numbers from a list partly filled by the user. */
void arrayMultiplier(int numbers[], int length);	/* This function multiplies every number in an array by an incremmenting counter. */
void inspector(int numbers[]);						/* This function allows the user to inspect an array. */


int main(void) {
	int numbers[ARRAY_SIZE] = { 0 };	/* The array used for demonstration. */
	int index = 0, temp = 0;			/* i is a counter variable and a multipurpose temporary storage variable. */

	/* Get numbers from the user to fill the array. */
	index = fillArray(numbers, ARRAY_SIZE);

	/* Print the numbers the user entered */
	printUserNumbers(numbers, index);

	printf("\n\n");  // spacing

	/* Multiply everything in the array by a counter. */
	arrayMultiplier(numbers, ARRAY_SIZE);
	
	/* Allow the user to inspect the array. */
	inspector(numbers);

	/* Wait for the user to press a key */
	getchar();
	getchar();

	return(0);
}


/* 
 * This function fills an array with inputs from the user.
 * The parameters are the array to fill and the maximum length of the array.
 * It returns the index where the sentinel was typed or the maximum length.
 */
int fillArray(int fill[], int length) {
	int i = 0, temp = 0;
	printf("Enter an integer (%d to quit) ", SENTINEL);
	scanf("%d", &temp);
	while (i < length && temp != SENTINEL) { // repeat until the list is full or the sentinel is hit.
		/* Shoudl the last number entered be valid, enter it in the array */
		fill[i] = temp;
		i++;

		/* Ask for another number */
		printf("Enter an integer (%d to quit) ", SENTINEL);
		scanf("%d", &temp);
	}

	return (i);
}


/*
 * This function prints numbers from a list partly filled by the user.
 * The parameters are the array to display numbers from and the number of indexes to show.
 */
void printUserNumbers(int numbers[], int count) {
	/* Show the user the numbers they entered */
	printf("Here are the numbers you entered: ");
	for (int i = 0; i < count; i++) { // i stores the index where the sentinel was entered
		printf(" %d", numbers[i]);
	}
}


/*
 * This function multiplies every number in an array by an incremmenting counter.
 * The parameters are the array to multiply and the length of the array.
 */
void arrayMultiplier(int numbers[], int length) {
	/* Multiply ever number in the array by an incrementing counter */
	for (int k = 0; k < ARRAY_SIZE; k++) {
		numbers[k] = numbers[k] * k;
	}
}


/*
 * This function allows the user to inspect an array.
 * The parameter is the array the user wants to examine.
 */
void inspector(int numbers[]) {
	int temp = 0; // temp stores the desired index

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
}