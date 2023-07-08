#include <stdio.h>
#include "main.h"

/**
 * main - the entry point
 * @argc: the number of arguments
 * @argv: array of string arguments
 *
 * Description: Prints the number of arguments passed into it
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
    printf("%d\n", argc);
    return 0;
}

