/*
*	initials.c
*
*	Part of Pset2 of CS50x
*
*	Christian Fredrik Mentzsen
*	christian.mentzsen@gmail.com
*/


#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main(void)
{
	
	string name;
	
	name = GetString();

	printf("%c", toupper(name[0]));
	
	for (int i = 0, length = strlen(name); i < length; i++)
	{
		if (name[i] == ' ' && name[i + 1] != '\0')
		{
			printf("%c", toupper(name[i + 1]));
			i++;
		}
	}
	printf("\n");
}
