/*
 * File: 100-change.c
 * Auth: Lalo Rdz
 */
#include "main.h"

void print_number(int n);
void print_int_recursion(unsigned int n);
int _atoi(char *s);
void print_error(void);

/**
 * main - prints the minimum number of coins to change an amount of money.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of strings. Each is one of the arguments that was passed.
 *
 * Description: prints the minimum number of coins.
 * If the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1.
 * If the number passed as the argument is negative, print 0,
 * followed by a new line.
 * Return: Zero.
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int n = 0;
	int t, v, i;

	if (argc != 2)
	{
		print_error();
		return (1);
	}
	v = _atoi(argv[1]);
	if (v > 0)
	{
		for (i = 0; i < 5; i++)
		{
			t = v / coins[i];
			v = v - (t * coins[i]);
			n = n + t;
			if (v == 0)
				break;
		}
	}
	print_number(n);
	_putchar('\n');
	return (0);
}

/**
 * _atoi - Function that convert a string to an integer.
 * @s: String to be converted into integer.
 *
 * Description: Function that convert a string to an integer.
 * Function created for Task 10 on Project pointers_arrays_strings.
 * Return: Integer.
 */
int _atoi(char *s)
{
	int i, j, n, m;

	i = n = 0;
	m = 1;

	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++;
	}

	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}

	return (n);
}

/**
 * print_number - Write a function that prints an integer.
 * @n: Int to be printed.
 *
 * Description: You can only use _putchar function to print.
 * Function created for Task 12 on Project more_functins_nested_loops.
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	if (n > 0)
		num = n;
	print_int_recursion(num);
}

/**
 * print_int_recursion - Prints an integer using recursion.
 * @num: Int to be printed.
 *
 * Description: You can only use _putchar function to print.
 * Function created for Task 12 on Project more_functins_nested_loops.
 * Return: void
 */
void print_int_recursion(unsigned int num)
{
	unsigned int number = num;
	unsigned int base = 10;

	if ((number / base == 0) && (number % base == 0))
	{
		return;
	}
	else
	{
		print_int_recursion(number / base);
		_putchar('0' + number % base);
	}
}

/**
 * print_error - Prints error message
 *
 * Description: Print each letter one by one followed by \n
 * Return: void
 */
void print_error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}
