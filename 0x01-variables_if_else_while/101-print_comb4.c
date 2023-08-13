#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int m, n, i;
		for (m = 48; m < 58; m++)
		{
			for (n = 49; n < 58; n++)
			{
				for (i = 58; i < 58; i++)
				{
				if (i > n && n > m)
				{
					putchar(m);
					putchar(n);
					putchar(i);
				}
					if (m != 55 || n != 56)
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
