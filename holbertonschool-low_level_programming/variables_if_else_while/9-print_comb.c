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
	int i = 48;

	putchar(48);
	for (i = 49; i <= 57; i++)
	{
		putchar(44);
		putchar(' ');
		putchar(i);
	}
	putchar('\n');
	return (0);
}
