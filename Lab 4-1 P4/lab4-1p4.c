/*
 * Programmer: Sam McDowell		Date Completed: July 9, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 4-1 Problem 4
 *
 * This program prints receipts for Keith's Sheet Music
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> /* printf, scanf, getchar definitions. */

void print_title(void);								/* Print the program title. */
int check_teacher(char input);						/* Check if the customer is a teacher. */
void print_receipt(int is_teacher, double total);	/* Print the receipt. */

int main(void) {
	double total = 0.0;
	int is_teacher = 0;
	char teacher_input;

	print_title();

	/* Get the total purchase amount. */
	printf("Please enter the purchase total: ");
	scanf("%lf", &total);

	/* Find out if the customer is a teacher. */
	printf("\nIs the customer a teacher? (y/n) ");
	scanf("\n%c", &teacher_input);

	is_teacher = check_teacher(teacher_input);

	/* print the receipt */
	print_receipt(is_teacher, total);

	/* Hold the program opne until the user presses a key. */
	getchar();
	getchar();

	return(0);
}


/* Print the program title. */
void print_title(void) {
	/* Print the title. */
	printf("KEITH'S SHEET MUSIC\n\n");
}


/* Checks the input to decide if the customer is a teacher */
int check_teacher(char input) {
	switch (input) {
		case 'y':
		case 'Y':
			return(1);
		default:
			return(0);
	}
}


/* Print the receipt */
void print_receipt(int is_teacher, double total) {
	double tax = 0.0, discount = 0.0; /* tax stores the sales tax, discount stores the teacher markdown amount. */

	/* Print the  unmodified total first */
	printf("\nTotal Purchase\t\t\t$%.2f\n", total);

	/* Apply teacher discount */
	if (is_teacher) {
		/* If the price is more than $100 then give a 12% discount, otherwise 10% */
		if (total > 100.0) {
			discount = total * 0.12;   /* Calculate the discount */
			
			printf("Teacher's Discount (12%%)\t$%.2f\n", discount);  /* Print it to the user. */
		}
		else {
			discount = total * 0.1;
			printf("Teacher's Discount (10%%)\t$%.2f\n", discount);
		}

		/* Print the total after the discount is taken into effect. */
		printf("Discounted Total\t\t$%.2f\n", total - discount);

		/* Calculate tax off of the discounted price. */
		tax = 0.05 * (total - discount);

		/* Print the sales tax */
		printf("Sales Tax (5%%)\t\t\t$%.2f\n", tax);

		/* Print the final total */
		printf("\nTotal\t\t\t\t$%.2f\n", total - discount + tax);
	}
	else {
		/* If the customer is not a teacher, apply tax and show the total. */
		tax = 0.05 * total;   /* Calculate tax */

		/* Print the sales tax */
		printf("Sales Tax (5%%)\t\t\t$%.2f\n", tax);

		/* Print the final total. */
		printf("\nTotal\t\t\t\t$%.2f\n", total + tax);
	}
}