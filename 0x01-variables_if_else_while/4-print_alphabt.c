#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase.
 * Print all the letters except q and e
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int lw = 'a';
while (lw <= 'z')
{
if (lw == 'e' || lw == 'q')
{
lw += 1;
}
else
{
putchar(lw);
lw += 1;
}
}
putchar('\n');
return (0);
}
