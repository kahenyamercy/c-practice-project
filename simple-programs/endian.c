#include <stdio.h>

/**
 * is_little_endian - Checks if the system is little-endian.
 *
 * Return: 1 if little-endian, 0 if big-endian.
 */
int is_little_endian(void)
{
	int num = 1;

	char *byte_ptr = (char *)&num;

	/* If the least significant byte is stored first, it is little-endian */
	return (*byte_ptr == 1);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	if (is_little_endian())
		printf("Little-endian\n");
	else
		printf("Big-endian\n");

	return (0);
}
