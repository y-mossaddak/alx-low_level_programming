#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - the entry point
 * @argc: the number of arguments
 * @argv: array of string arguments
 * Description:  prints all arguments it receives
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}

