#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>

int _putchar(char c);

/* Project C - Pointers, arrays and strings */
/* Task 0 */
void reset_to_98(int *n);
/* Task 1 */
void swap_int(int *a, int *b);
/* Task 2 */
int _strlen(char *s);
/* Task 3 */
void _puts(char *str);
/* Task 4 */
void print_rev(char *s);
/* Task 5 */
void rev_string(char *s);
/* Task 6 */
void puts2(char *str);
/* Task 7 */
void puts_half(char *str);
/* Task 8 */
void print_array(int *a, int n);
/* Task 9 */
char *_strcpy(char *dest, char *src);
/* Task 10 */
int _atoi(char *s);

/* Project C - More pointers, arrays and strings */
/* Task 0 */
char *_strcat(char *dest, char *src);
/* Task 1 */
char *_strncat(char *dest, char *src, int n);
/* Task 2 */
char *_strncpy(char *dest, char *src, int n);
/* Task 3 */
int _strcmp(char *s1, char *s2);
/* Task 4 */
void reverse_array(int *a, int n);
/* Task 5 */
char *string_toupper(char *);
/* Task 6 */
char *cap_string(char *);
/* Task 7 */
char *leet(char *);
/* Task 8 */
char *rot13(char *);
/* Task 9 */
void print_number(int n);
/* Task 11 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* Project C - More pointers, arrays and strings */
/* Task 0 */
char *_memset(char *s, char b, unsigned int n);
/* Task 1 */
char *_memcpy(char *dest, char *src, unsigned int n);

#endif /* MAIN_H */
