#include <stdio.h>
/**
 * main - entry point
 *
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
int main(int ac, char *av[])
{
	int i;

	printf("ac =%d\n", ac);
	printf("Everything in av\n");
	for (i = 0; i < ac; i++)
	{
		printf("av[%d] = %s\n", i, av[i]);
	}
	return (0);
}
