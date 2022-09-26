#include <stdio.h>

/**
 * main - print alphabet in uppercase
 * Description:
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
