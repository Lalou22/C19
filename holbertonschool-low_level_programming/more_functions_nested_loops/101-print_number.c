/*
 * File: 101-print_number.c
 * Auth: Lalo Rdz
 */
#include "main.h"

void print_int_recursion(int n);
/**
 * print_number - Write a function that prints an integer.
 * @n: Int to be printed.
 *
 * Description: You can only use _putchar function to print.
 * Return: void
 */
void print_number(int n)
{
	int num = n;

	if (num == 0)
	{
		_putchar('0');
		return;
	}
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	print_int_recursion(num);
}

/**
 * print_int_recursion - Prints an integer using recursion.
 * @num: Int to be printed.
 *
 * Description: You can only use _putchar function to print.
 * Return: void
 */
void print_int_recursion(int num)
{
	int number = num;
	int base = 10;

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
