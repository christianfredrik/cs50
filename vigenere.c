/*
*
*	vigenere.c
*
*	Part of Pset2 of CS50x.
*
*	Christian Fredrik Mentzsen
*	christian.mentzsen@gmail.com
*
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
	{

	// Variables
	int keyint;
	int shift;

	// keylength
	// length

	// Deny wrong count of cmd line args.
	if (argc != 2)
	{
		printf("Wrong count of command line arguments\n");
		return 1;
	}

	// Assign entered key to variable "key".
	string key = argv[1];

	// Check - only letters in keyword.
	for (int n = 0, keylength = strlen(argv[1]); n < keylength; n++)
	{
		if (!isalpha(key[n]))
		{
			printf("Only letters in keyword. Restart\n");
			return 1;
		}
	}

/************************HANDLE TEXT INPUT********************************/
	string text = GetString();


	// J = KEY POSITION, I = TEXT POSITION
	for (int i = 0, j = 0, length = strlen(text); i < length; i++, j++)
	{
		// Reset keyposition if shorter than keyword.
		if (j >= strlen(key))
		{
			j = 0;
		}


		keyint = key[j];

		// Skip key[j], when text[i] is not a alpha character.
		if (!isalpha(text[i]))
		{
			j = (j - 1);
		}

/************************ENCRYPTION***************************************/

		// Convert A = 0, Z = 25. Uppercase & lowercase
		if ((keyint >= 'A') && (keyint <= 'Z'))
		{
			keyint = (keyint - 'A');
		}

		if ((keyint >= 'a') && (keyint <= 'z'))
		{
			keyint = (keyint - 'a');
		}

		// Encryption
		shift = (text[i] + keyint);

		if (isupper(text[i]) && (shift > 'Z'))
		{
			shift = (shift - 26);
		}

		if (islower(text[i]) && (shift > 'z'))
		{
			shift = (shift - 26);
		}

		// Print result
		if (isalpha(text[i]))
		{
			printf("%c", shift);
		}
		else
		{
			printf("%c", text[i]);
		}
	}
	printf("\n");
	return 0;
}
