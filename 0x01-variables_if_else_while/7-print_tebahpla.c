#include <stdio.h>
/**
 * main - prints all the lowercase alphabet in reverse
 * Return: 0 if successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
