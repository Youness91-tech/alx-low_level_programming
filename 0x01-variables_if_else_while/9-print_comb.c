#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
