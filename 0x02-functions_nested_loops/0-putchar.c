#include<stdio.h>
/**
 *_putchar: return putchar
 * main :  point d'entrty
 * description :called _putchar for print _putchar
 * retur alwayz 0
*/
int _putchar(char c)
{
    return putchar(c);
}

int main()
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    return 0;
}
