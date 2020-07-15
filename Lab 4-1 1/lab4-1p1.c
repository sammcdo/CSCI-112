/*
 * Programmer: Sam McDowell		Date Completed: July 8, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 4-1 Problem 1
 *
 * This program sorts 3 numbers from lowest to highest.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf, getchar definitions */

int main(void) {
	int low = 3, mid = 2, high = 4; /* low mid and high hold the values that are being sorted. */
	int temp = 0; /* temp hold a value temporarily during sorting. */

	/* Get the 3 numbers from the user. */
	printf("Enter number 1: ");
	scanf("%d", &low);

	printf("Enter number 2: ");
	scanf("%d", &mid); 

	printf("Enter number 3: ");
	scanf("%d", &high);

	printf("The original numbers were %d, %d, %d.\n", low, mid, high);

	/* This first block of conditions will properly sort if the numbers are entered in reverse order. */
	if (low > high) {
		temp = high;
		high = mid;
		mid = low;
		low = temp;
		if (low > high) {
			temp = high;
			high = mid;
			mid = low;
			low = temp;
		}
	}

	/* Check and fix the middle values for any other combinations. */
	if (mid > high) {
		temp = mid;
		mid = high;
		high = temp;
	}

	if (low > mid) {
		temp = low;
		low = mid;
		mid = temp;
	}

	/* Display the sorted numbers to the user. */
	printf("The sorted numbers are %d, %d, %d.\n", low, mid, high);

	/* Hold the program open until the user presses a key. */
	getchar();
	getchar();

	return(0);
}