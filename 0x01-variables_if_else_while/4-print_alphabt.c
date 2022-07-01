#include <stdio.h>

/**
* main - Prints lowercase letters of the alphabet using putchar()
*
* Return: 0 if successful
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
