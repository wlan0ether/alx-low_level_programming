#include <stdio.h>

/**
 * main - program entry
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
	}

	putchar('\n');

	return (0);
}
