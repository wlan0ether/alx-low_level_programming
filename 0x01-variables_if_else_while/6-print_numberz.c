#include <stdio.h>
/**
 * main - program entry
 * 
 * Return: 0 (success)
 */
int main(void)
{
	int q;

	for (q = 0; q < 10; q++)
	{
		putchar(q + '0');
	}

	putchar('\n');

	return (0);
}
