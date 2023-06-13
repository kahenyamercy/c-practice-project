#include <stdio.h>

/**
 * is_prime - checks if a number is prime
 * @num: the number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime(int num)
{
	int i;

	if (num <= 1)
		return (0);
	for (i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return (0);
	}

	return (1);
}

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int start, end, i;

	printf("Enter the range (start end): ");
	scanf("%d %d", &start, &end);

	printf("Prime numbers between %d and %d are: ", start, end);
	for (i = start; i <= end; i++)
	{
		if (is_prime(i))
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}

