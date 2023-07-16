#include <stdio.h>

/**
 * main - program entry
 *
 * Return: 0 (success)
 */
int main(void)
{
	char hexadecimals;

	for (hexadecimals = '0'; hexadecimals <= '9'; hexadecimals++)
	{
		putchar(hexadecimals);
	}

	for (hexadecimals = 'a'; hexadecimals <= 'f'; hexadecimals++)
	{
		putchar(hexadecimals);
	}

	putchar('\n');

	return (0);
}
