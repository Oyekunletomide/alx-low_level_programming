#include <stdio.h>

/**
* main - Prints all single digit numbers of base 10 starting from 0.
*
* Return: Always 0.
*/
int main(void)
{

	char nums[] = "0123456789\n\0";
	int i;

	for (i = 0; nums[i] != '\0'; i++)
		putchar(nums[i]);

	return (0);
	
}
