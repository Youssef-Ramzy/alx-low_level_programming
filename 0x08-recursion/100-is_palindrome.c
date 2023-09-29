#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 * @s: the string to be printed
 * Return: the length of string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	i = _strlen_recursion(s + 1);
	return (i + 1);
}

/**
 * check_palindrome - check if a string is palindrome
 * @s: string to check
 * @i: iterator
 * Return: 1 if palindrome, 0 otherwise
*/
int check_palindrome(char *s, int i)
{
	int len = _strlen_recursion(s) - 1;

	if (s[i] != s[len - i])
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1));
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0));
}

