/**
 *	greedy.c
 *
 *	Christian Fredrik Mentzsen
 *	christian.mentzsen@gmail.com
 *
 *	CS50 - pset1
 */

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void) 
{

	// Define variables. 
float dollar = 0;
int cents = 0;
int coins = 0;
int leftover = 0;

int quarterCount = 0;
int dimeCount = 0;
int nickleCount = 0;

	// Get user input. 
do 
	{
	printf("You give me the amount:");
	dollar = GetFloat();
	
	if (dollar == 0 || dollar <= 0)
	printf("The number should be greater than 0\n");
	}
while (dollar <= 0);
	
	// Convert from dollars to cents.
cents = (int)round(dollar*100);

	// Counting coins.
quarterCount = cents / 25;
leftover = cents - (25 * quarterCount);

dimeCount = leftover / 10;
leftover = leftover - (10 * dimeCount);

nickleCount = leftover / 5;
leftover = leftover - (5 * nickleCount);

	coins = quarterCount + dimeCount + nickleCount + leftover;
	printf("%d\n", coins);

	return 0;
}
