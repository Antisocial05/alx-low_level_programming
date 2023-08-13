#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int m, n, i;
		for (m = '0'; m <= '9'; m++)
		{
			for (n = '0'; n <= '9'; n++)
			{
				for (i = '0'; i <= '9'; i++)
				{
				if (m < n && n < i)
				{
					putchar(m);
					putchar(n);
					putchar(i);
				}
					if (m != '7' || n != '8' || i != '9')
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
