/*
 * Programmer: Sam McDowell		Date Completed: July 30, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 8 Problem 1
 *
 * This program demonstrates some uses for arrays.
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>		/* printf, scanf, getchar definitions */

/* --- PREPROCESSOR DEFINITIONS --- */
#define BASE_PAY 200							/* Each employee gets a base payment of this amount. */
#define COMMISISSION 0.09						/* They also get this percent of their sales back as a commission */
#define SENTINEL -999							/* This is the sentinel value for entering employee sales */


/* --- FUNCTION PROTOTYPES --- */
void print_title(void);											/* Prints the program title. */
void get_sales(int employeeSalaries[], int sentinel);			/* Get the sales for each employee. */
int round(double input);										/* Round a double to the nearest integer. */
double calculate_pay(int base_pay, double rate, int sales);		/* Calculate each employee's pay based on the base payment and a commission of their sales. */
void display_results(int employeeSalaries[]);					/* This function displays the results of the calculated salaries. */


int main(void) {
	int employeeSalaries[9] = { 0 };

	/* Print a fancy header */
	print_title();

	/* Get the sales from the user */
	get_sales(employeeSalaries, SENTINEL);

	/* print the results */
	display_results(employeeSalaries);

	/* wait until the user presses a key */
	getchar();
	getchar();

	return(0);
}


/* Prints the program title. */
void print_title(void) {
	printf("------------------------------------\n");
	printf("--- ACME Employee Pay Calculator ---\n");
	printf("------------------------------------\n\n\n");
}


/* 
 * Get the sales for each employee.
 * The parameters are the sales array and the seninel value.
 */
void get_sales(int employeeSalaries[]) {
	int temp = 0;

	printf("Enter employee sales [%d to quit]: ", SENTINEL);
	scanf("%d", &temp);
	while (temp != SENTINEL) {
		/* calcuate their pay */
		temp = round(calculate_pay(BASE_PAY, COMMISISSION, temp));
		
		/* Sort the calculated salary into its bracket */
		if (temp >= 200 && temp < 300) {
			employeeSalaries[0] += 1;
		}
		else if (temp < 400) {
			employeeSalaries[1] += 1;
		}
		else if (temp < 500) {
			employeeSalaries[2] += 1;
		}
		else if (temp < 600) {
			employeeSalaries[3] += 1;
		}
		else if (temp < 700) {
			employeeSalaries[4] += 1;
		}
		else if (temp < 800) {
			employeeSalaries[5] += 1;
		}
		else if (temp < 900) {
			employeeSalaries[6] += 1;
		}
		else if (temp < 1000) {
			employeeSalaries[7] += 1;
		}
		else if (temp >= 1000) {
			employeeSalaries[8] += 1;
		}
		else { // most likely they entered a negative sales number
			printf("\tUnable to calculate pay.\n");
		}

		/* Get the next value */
		printf("Enter employee sales [%d to quit]: ", SENTINEL);
		scanf("%d", &temp);
	}
}


/* 
 * Round a double to the nearest integer.
 * The parameter is the number to round.
 * The return value is the input rounded to an integer.
 */
int round(double input) {
	return (int)(input + 0.5);
}


/* 
 * Calculate each employee's pay based on the base payment and a commission of their sales.
 * The parameters are the base pay, the commission rate and the amount of sales they had.
 * The return value is the final payment.
 */
double calculate_pay(int base_pay, double rate, int sales) {
	return base_pay + (rate * sales);
}


/* 
 * This function displays the results of the calculated salaries.
 * The parameter is the array of the salaries.
 */
void display_results(int employeeSalaries[]) {
	int temp = 0;

	printf("\n\n");

	/* Find the total number of employees */
	for (int i = 0; i < 9; i++) {
		temp += employeeSalaries[i];
	}

	printf("Total Employees: %d\n", temp);

	/* Print the correct bracket and the number of employees in that range. */
	for (int i = 0; i < 8; i++) {
		if (employeeSalaries[i] != 0) {
			temp = 200 + (i * 100);
			printf("$%d-%d: %d\n", temp, temp + 99, employeeSalaries[i]);
		}
		else {
			printf("$%d-%d: -\n", temp, temp + 99);
		}
	}

	/* This one is formatted differently so it is outside the loop */
	if (employeeSalaries[8] != 0) printf("$1000+  : %d\n", employeeSalaries[8]);
	else printf("$1000+  : -\n");
}