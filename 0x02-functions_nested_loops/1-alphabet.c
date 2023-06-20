#include <stdio.h>
/**
 *_putchar: return putchar
 * main :  point d'entrty
 * description :called _putchar for print the alphabet, in lowercase
 * retur alwayz 0
 */

int _putchar(char c)
{
    return putchar(c);
}

int main()
{
    char i = 'a';
    for (; i <= 'z'; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
    return 0;
}
