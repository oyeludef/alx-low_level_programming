#include "main.h"
/**
  * _isupper - check for uppercase alphabeth
  *
  * @c: alphabet
  *
  * Return: 1 for uppercase 0 if otherwise
  *
  */
int _isupper(int c)
{
	char c;

	if (c >= 65 && c <= 90)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
	_purchar('\n');

}
