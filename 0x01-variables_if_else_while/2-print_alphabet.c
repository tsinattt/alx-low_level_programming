#include <stdio.h>
#include <ctype.h>
/**
 * main - program that prints the alphabet in lowercase.
 * You can only use the putchar function is forbidden
 * You can only use putchar twice in your code
 * Return: 0
 */
int main(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
