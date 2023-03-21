#include "main.h"
/**
  * _isalpha - prints uppercase characters.
  *
  * @c: is a character in ASCII code
  *
  * Return: 1 for uppercase and 0 when otherwise
  *
  */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
