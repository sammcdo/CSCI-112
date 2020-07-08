/*
 * Programmer: Sam McDowell		Date Completed: July 3, 2020
 * Instructor: Terrie Canon		Class: CSCI 112
 * Assignment: Lab 3 Problem 2
 *
 * This program draws a rocket ship and two stick figures.
 */

#include <stdio.h> /* printf, getchar definitions */

 /* Function prototypes */
void draw_circle(void);                 /* Draws a circle                     */

void draw_intersect(void);              /* Draws intersecting lines           */

void draw_base(void);                   /* Draws a base line                  */

void draw_triangle(void);               /* Draws a triangle                   */

void draw_rectangle(void);              /* Draws a rectangle                  */

void draw_rocket(void);                 /* Draws a rocket ship                */

void draw_male_figure(void);            /* Draw a male stick figure           */

void draw_female_figure(void);          /* Draw a female stick figure         */


int main(void) {
    /* Draw a rocket ship */
    draw_rocket();

    /* Add some spacing */
    printf("\n");

    /* Draw a male stick figure */
    draw_male_figure();

    /* Add some spacing */
    printf("\n");

    /* Draw a female stick figure */
    draw_female_figure();

    /* Hold the program open until the user hits a key */
    getchar();

    return(0);
}


/*
 * Draws a circle
 */
void
draw_circle(void)
{
    printf("    *   \n");
    printf(" *    * \n");
    printf("   * *  \n");
}

/*
 * Draws intersecting lines
 */
void
draw_intersect(void)
{
    printf("  / \\  \n"); /* Use 2 \'s to print 1 */
    printf(" /   \\ \n");
    printf("/     \\\n");
}

/*
 * Draws a base line
 */
void
draw_base(void)
{
    printf("-------\n");
}

/*
 * Draws a triangle
 */
void
draw_triangle(void)
{
    draw_intersect();
    draw_base();
}

/*
 * Draws a rectangle
 */
void
draw_rectangle(void)
{
    printf("-------\n");
    printf("|     |\n");
    printf("|     |\n");
    printf("|     |\n");
    printf("-------\n");
}

/*
 * Draws a rocket ship
 */
void
draw_rocket(void)
{
    draw_triangle();
    draw_rectangle();
    draw_intersect();
}

/*
 * Draws a male stick figure
 */
void
draw_male_figure(void)
{
    draw_circle();
    draw_rectangle();
    draw_intersect();
}

/*
 * Draws a female stick figure
 */
void
draw_female_figure(void)
{
    draw_circle();
    draw_triangle();
    draw_intersect();
}