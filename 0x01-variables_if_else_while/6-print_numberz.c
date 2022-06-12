#include <stdio.h>
/*
 * main - program that prints all single digit numbers of base 10 starting from
 * You can only use the putchar function
 * You can only use putchar twice in your code
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
	putchar((num % 10) + '0');
putchar('\n');
return (0);
}
