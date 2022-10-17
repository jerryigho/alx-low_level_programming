#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print two digita combination
 * Return: Always 0 (successful)
 */
int main(void)
{
	int c, i;

	for (c = '0'; i <= '9'; i++)
	{
		if (c < i)
		{
			putchar(c);
			putchar(i);

			if (c != '8' || (c == 'g' && i != '9'))
			{
				putchart(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
