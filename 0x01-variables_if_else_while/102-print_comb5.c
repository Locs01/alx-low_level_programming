#include<stdio.h>
/**
 * main - Prints 2 digit numbers
 * Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i + j != 197)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
			return (0);
}
