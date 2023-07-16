#include <stdio.h>

/**
 * main - program entry
 *
 * Return: 0 (success)
 */
int main(void)
{
	char smallalpha, capitalalpha;

	for (smallalpha = 'a'; smallalpha <= 'z'; smallalpha++)
	{
		putchar(smallalpha);
	}

	for (capitalalpha = 'A'; capitalalpha <= 'Z'; capitalalpha++)
	{
		putchar(capitalalpha);
	}

	putchar('\n');

	return (0);
}
