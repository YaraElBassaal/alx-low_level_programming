#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: 0
  */
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
