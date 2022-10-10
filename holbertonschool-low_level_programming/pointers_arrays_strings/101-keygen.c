#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Create a program that generates random valid passwords
 *
 * Return: Always 0
 */
int main(void)
{
	int n, digit, div = 1, sum = 0, left = 0;
	
	while (sum < 2772)
	{
		srand(time(0));
		n = rand();
		div = n;
		/*get the sum of the random number digits*/
		while (div != 0)
		{
			digit = div % 100;
			sum += digit;
			if (sum > 2772)
			{
				left = sum - 2772;
				digit -= left;
				sum -= left;
				div = 0;
			}
			div = div / 100;
			putchar(digit);
		}
	}

	return (0);
}
