#include <stdio.h>
/**
 * main - prints all different combinations of three digits
 *
 * Return: return 0
 */
int main(void)
{
	int t, k, a;

	for (t = '0'; t <= '9'; t++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			if (t < k && k < a)
			{
				putchar(t);
				putchar(k);
				putchar(a);

				if (t != '7')
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
