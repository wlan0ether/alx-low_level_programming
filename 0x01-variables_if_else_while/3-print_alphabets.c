#include <stdio.h>

/**
 * main - program entry
 *
 * Return: 0 (success)
 */
int main(void)
{
	char smallalpha, capitalalpha;

	for (smallalpha = 'a'; smallapha <= 'z'; smallalpha++)
	{
		putchar(smallalpha);
	}

	for (capitalalpha = 'A'; capitalalpha <= 'Z'; capitalalpha++)
	{
		putchar(capitalalpha)
	}

	return (0);
}
