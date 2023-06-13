#include <stdio.h>
/**
 * main - entry point
 *
 */
void main(void)
{
	int num, i, count = 0;

	printf("Enter a number:");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			count++;
	}
	if (count == 2)
		printf("%d is prime\n", num);
	else
		printf("%d is not prime\n", num);
}
