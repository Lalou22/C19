/*
 * File: 6-abs.c
 * Auth: Lalo Rdz
 */
#include "main.h"

/**
 * _abs - Compute abs
 * @n: The int to be computed
 *
 * Description: Function that returns absolute value of an integer.
 * Return: abs(n)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
