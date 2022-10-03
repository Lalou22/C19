/*
 * File: 101-print_number.c
 * Auth: Lalo Rdz
 */
#include "main.h"

void print_int_recursion(unsigned int n);
/**
 * print_number - Write a function that prints an integer.
 * @n: Int to be printed.
 *
 * Description: You can only use _putchar function to print.
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
