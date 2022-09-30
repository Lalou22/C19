/*
 * File: 9-print_comb.c
 * Auth: Lalo Rdz
 */
#include <stdio.h>
/**
 * main - Write a program that prints all possible combinations of
 * single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
