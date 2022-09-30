/*
 * File: 8-print_base16.c
 * Auth: Lalo Rdz
 */
#include <stdio.h>
/**
 * main - Write a program that prints all the numbers of base 16.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (i = 97; i <= 102; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
