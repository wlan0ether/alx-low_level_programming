# include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 on success, non-zero value on failure
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
