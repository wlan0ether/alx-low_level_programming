#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = '0';
	int second = '0';
	int third = '0';

	for (third = '0'; third <= '9'; third++)
	{
		for (second = '0'; second <= '9'; second++)
		{
			for (first = '0'; first <= '9'; first++)
			{
				if (!((first == second) || (second == third) || (second > first) || (third > second)))
				{
					putchar(third);
					putchar(second);
					putchar(first);
					if (!(first == '9' && third == '7' && second == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
