#include "main.h"

/**
* main - prints the alphabet, in lowercase
*
* Return: Always 0.
*/

int main(void)
{
	print_alphabet();
        return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
