/*
 * Programmer: Sam McDowell		Date Completed: July 15, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 5 Problem 3
 *
 * This print all the even numbers from 2 to 30.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, getchar definitions */


int main(void) {
	/* print all the even numbers from 2-30 */
	for (int i = 2; i <= 30; i += 2) {
		printf("%d ", i);
	}

	/* Hold the program open until the user hits a key */
	getchar();

	return(0);
}