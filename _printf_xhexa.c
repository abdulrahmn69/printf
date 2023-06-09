#include "main.h"

/**
 * _printf_xhexa - function to print hexadecimal numbers
 * @args: list
 * Return: int
 */
int _printf_xhexa(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0, i;
int digits[32];

/* Compute the hexadecimal digits in the correct order */
int num_digits = 0;

do {
int digit = num % 16;

digits[num_digits++] = digit < 10 ? digit + '0' : digit - 10 + 'a';
num /= 16;
} while (num > 0);

/* Print the hexadecimal digits in the correct order */
for (i = num_digits - 1; i >= 0; i--)
{
count += _putchar(digits[i]);
}

return (count);
}
