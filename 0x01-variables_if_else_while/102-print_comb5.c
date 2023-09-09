#include <stdio.h>
/**
 * main - prints combinations of two two-digit numbers
 *
 * Return: return 0
 */
int main(void)
{
	int tsi1, tsi2;

	for (tsi1 = 0; tsi1 <= 98; tsi1++)
	{
		for (tsi2 = tsi1 + 1; tsi2 <= 99; tsi2++)
		{
			putchar((tsi1 / 10) + '0');
			putchar((tsi1 % 10) + '0');
			putchar(32);
			putchar((tsi2 / 10) + '0');
			putchar((tsi2 % 10) + '0');

			if (tsi1 / 10 != 9 || tsi1 % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
