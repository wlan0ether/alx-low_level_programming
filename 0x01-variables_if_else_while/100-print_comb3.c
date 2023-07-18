#include <stdio.h>
/**
 * main - program entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstdigit = '0';
	int seconddigit = '0';

	for (seconddigit = '0'; seconddigit <= '9'; seconddigit++)
	{
		for (firstdigit = '0'; firstdigit <= '9'; firstdigit++)
		{
			if (!((firstdigit == seconddigit) || (seconddigit > firstdigit)))
			{
				putchar(seconddigit);
				putchar(firstdigit);
				if (!(firstdigit == '9' && seconddigit == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
