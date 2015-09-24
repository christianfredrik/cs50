/**
 *	mario.c
 *
 *	Christian Fredrik Mentzsen
 *	christian.mentzsen@gmail.com
 *
 *	CS50 - pset1
 */

#include <cs50.h>
#include <stdio.h>

int main(void) {

	// Declare variable. 
	int height;

	// Grab user input.
do 
{
	printf("Give me an integer between 0 and 23, please\n");
	height = GetInt();
}
while (height < 0 || height > 23);
	

	// Determine count of rows to print & print spaces + hashes.
for (int i = 0; i < height; i++)
{
	for (int space = 0; space < height -i -1; space++)
{
	printf("%s", " ");
}
	for (int hash = 0; hash < i +2; hash++)
	{
		printf("#");
	}
		printf("\n");
}
	return 0;
}
